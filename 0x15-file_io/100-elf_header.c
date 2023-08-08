#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

void func1(unsigned char *p);
void func2(unsigned long int ad, unsigned char *p);
void func3(int a);
void _magic(unsigned char *p);
void _class(unsigned char *p);
void _data(unsigned char *p);
void _version(unsigned char *p);
void _abi(unsigned char *p);
void _osabi(unsigned char *p);
void _type(unsigned int t, unsigned char *p);

/**
 * main - entry
 *@av: vector of arg
 *Return: 0
 */

int main(char *av[])
{
	Elf64_Ehdr *h = NULL;
	int x = -1, y;

	if (h == NULL)
	{
		func3(x);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", av[1]);
		exit(98);
	}
	x = open(av[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", av[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));

	y = read(x, h, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(h);
		func3(x);
		dprintf(STDERR_FILENO, "Error: Not an elf file %s\n", av[1]);
		exit(98);
	}
	func1(h->e_ident);
	func2(h->e_entry, h->e_ident);
	printf("ELF Header:\n");
	_magic(h->e_ident);
	_class(h->e_ident);
	_data(h->e_ident);
	_version(h->e_ident);
	_abi(h->e_ident);
	_osabi(h->e_ident);
	_type(h->e_type, h->e_ident);
	free(h);
	func3(x);
	return (0);
}

/**
 * func1 - helper
 * @p: pointer
 */
void func1(unsigned char *p)
{
	int ax = 0;

	while (ax < 4)
	{
		if (
				p[ax] != 127 &&
				p[ax] != 'E' &&
				p[ax] != 'L' &&
				p[ax] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		ax++;
	}
}

/**
 * func2 - helper
 * @ad: The address of the elf
 * @p: pointer
 */
void func2(unsigned long int ad, unsigned char *p)
{
	printf("  Entry point address:               ");

	if (p[EI_DATA] == ELFDATA2MSB)
	{
		ad = ((ad << 8) & 0xFF00FF00) |
			((ad >> 8) & 0xFF00FF);
		ad = (ad << 16) | (ad >> 16);
	}
	if (p[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)ad);
	else
		printf("%#lx\n", ad);
}

/**
 * func3 - helper
 * @a: file's descriptor
 */
void func3(int a)
{
	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", a);
		exit(98);
	}
}

/**
 * _magic - Prints the magic
 * @p: pointer
 */
void _magic(unsigned char *p)
{
	int ax = 0;

	printf("  Magic:   ");

	while (ax < EI_NIDENT)
	{
		printf("%02x", p[ax]);
		if (ax == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		ax++;
	}
}

/**
 * _class - Prints the class
 * @p: pointer
 */
void _class(unsigned char *p)
{
	printf("  Class:                             ");
	switch (p[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", p[EI_CLASS]);
	}
}

/**
 * _data - Prints the
 * @p: pointer
 */
void _data(unsigned char *p)
{
	printf("  Data:                              ");

	switch (p[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
	}
}

/**
 * _version - Prints the version
 * @p: pointer
 */
void _version(unsigned char *p)
{
	printf("  Version:                           %d",
			p[EI_VERSION]);
	switch (p[EI_VERSION])
	{
		case EV_CURRENT:
			printf("%s", "");
			break;
	}
	printf("\n");
}

/**
 * _abi - Prints ABI .
 * @p: pointer
 */
void _abi(unsigned char *p)
{
	printf("  ABI Version:                       %d\n",
			p[EI_ABIVERSION]);
}

/**
 * _osabi - Prints OS/ABI
 * @p: pointer
 */
void _osabi(unsigned char *p
)
{
	printf("  OS/ABI:                            ");
	switch (p[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
	}
	printf("\n");
}

/**
 * _type - Prints the type
 * @p: pointer
 * @t: type
 */
void _type(unsigned int t, unsigned char *p)
{
	if (p[EI_DATA] == ELFDATA2MSB)
		t >>= 8;
	printf("  Type:                              ");

	switch (t)
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		default:
			printf("<unknown: %x>\n", t);
	}
	printf("\n");
}
