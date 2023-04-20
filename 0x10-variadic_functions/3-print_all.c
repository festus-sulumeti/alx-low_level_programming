#include "variadic_functions.h"

/**
* print_all - Prints all of the arguments when specified
* @format: specifies the necessary operations
* Return: void
*/

void print_all(const char * const format, ...)
{
	int i;
	int should_print_comma;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		should_print_comma = 0;
		switch (format[i])
		{
			case 'c': /* char */
				printf("%c", va_arg(a_list, int));
				break;
			case 'i': /* integer */
				printf("%i", va_arg(a_list, int));
				break;
			case 'f': /* float */
				printf("%f", va_arg(a_list, double));
				break;
			case 's': /* string */
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				should_print_comma = 1;
				break;
		}
		if (format[i + 1] != '\0' && should_print_comma == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list); /* end the variable argument list */
}
