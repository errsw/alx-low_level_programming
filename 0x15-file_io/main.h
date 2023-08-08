#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

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

#endif
