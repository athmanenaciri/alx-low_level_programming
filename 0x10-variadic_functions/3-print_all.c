#include "variadic_functions.h"

/**
 * print_all - Print anything based on the format provided.
 * @format: A list of types of arguments.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
