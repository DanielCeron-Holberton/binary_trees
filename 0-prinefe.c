#include <stdarg.h>
#include <stdio.h>

typedef struct conversion
{
	char *op;
	int (*f)(va_list);
} op_t;

int letsprint(char c)
{
	return (write(1, &c, 1));
}

int print_d(va_list d)
{
	int n = va_arg(d, int);
	int i = 0, a = 0, size_t = 0; /* variables a recorrer*/
	int u_numero = 0, revertir = 0;

	if (n < 0)
	{
		size_t += letsprint('-');
		u_numero = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		u_numero = ((n % 10) + '0');
		n /= 10;
	}
	for (revertir = 0; n > 0; i++)
	{
		revertir = ((revertir * 10) + (n % 10));
		n /= 10;
	}
	for (; revertir > 0;)
	{
		n = ((revertir % 10) + '0');
		size_t += letsprint(n);
		revertir /= 10;
	}
	size_t += letsprint(u_numero);
	if (i == 0)
		i++;
	for (a = 0; a <= i - 2; a++)
		size_t += letsprint('0');
	return (size_t);

int (*get_conversion(const char *format))(va_list)
{
		op_t conv[] = {
			{"d", print_d},
			{"i", print_d},
			{NULL, NULL}};

		int a = 0;

		for (; conv[a].op != NULL; a++)
		{
			if (*(conv[a].op) == *format)
			{
				break;
			}
		}
		return (conv[a].f);
}

	int _printf(const char *format, ...)
	{
		int b = 0;
		int c = 0;
		va_list args;
		int (*f)(va_list);

		if (format == NULL)
			return (-1);
		va_start(args, format);
		while (format[b])
		{
			for (; format[b] != '%' && format[b]; b++)
			{
				letsprint(format[b]);
				c++;
			}
			if (!format[b])
				return (c);
			f = get_conversion(&format[b + 1]);
			if (f != NULL)
			{
				c += f(args);
				b += 2;
				continue;
			}
			if (!format[b + 1])
				return (-1);
			letsprint(format[b]);
			c++;
			if (format[b + 1] == '%')
				b += 2;
			else
				b++;
		}
		va_end(args);
		return (c);
	}
}