#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print name using a pointer to a function
 * @name: String to be processed
 * @f: Pointer to a function that takes a char pointer as an argument
 *
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
