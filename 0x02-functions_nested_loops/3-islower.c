#include "main.h"

/**
 * main - islower funtion
 *
 * 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
