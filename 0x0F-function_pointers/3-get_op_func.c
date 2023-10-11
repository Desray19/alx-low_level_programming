#include "3-calc.h"
#include "function_pointers.h"
/**
 * get_op_func - adds two intigers
 * @s: The character input
 *
 * Return: 0 on filure or pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i <= 4)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
}
i++;
}
return (ops[i].f);
}
