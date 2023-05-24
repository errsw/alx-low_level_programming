#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Selects the correct function to perform
* @s: operator
* Return: pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int x = 0;

	while (x < 5)
	{
		if (s && s[0] == ops[x].op[0] && !s[1])
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
