#include "main.h"

/**
 * _printf - prints and input into the standard output
 * @format: the format string
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)

{
	int sum = 0;
	va_list ap;
	char *p, *start;

	params_t params = PARAMS_INIT;

	va_start(ap, format);
