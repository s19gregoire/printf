/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:48:13 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 15:15:19 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c) {
	char a[1];
	a[0] = (char)c;
	return write(0, a, 1);
}

static int ft_printf_lenght(const char *fmt, va_list ap, int len);

static int ft_printf_c(const char *fmt, va_list ap, int len) {
	int c = va_arg(ap, int);
	ft_putchar(c);
	return ft_printf_lenght(fmt, ap, len + 1);
}

static int ft_putnumb_base(unsigned long long n, unsigned int base, const char *digits) {
	int res = 1;
	if (n >= base)
		res += ft_putnumb_base(n / base, base, digits);
	ft_putchar(digits[n % base]);
	return res;
}

static int ft_printf_d(const char *fmt, va_list ap, int len) {
	int n = va_arg(ap, int);
	unsigned long long u;
	if (n < 0) {
		ft_putchar('-');
		len++;
		u = -(unsigned)n;
	} else {
		u = n;
	}
	len += ft_putnumb_base(u, 10, "0123456789");
	return ft_printf_lenght(fmt, ap, len);
}

static int ft_printf_o(const char *fmt, va_list ap, int len) {
	unsigned int n = va_arg(ap, unsigned int);
	len += ft_putnumb_base(n, 8, "01234567");
	return ft_printf_lenght(fmt, ap, len);
}

static int ft_printf_u(const char *fmt, va_list ap, int len) {
	unsigned int n = va_arg(ap, unsigned int);
	len += ft_putnumb_base(n, 10, "0123456789");
	return ft_printf_lenght(fmt, ap, len);
}

static int ft_printf_x(const char *fmt, va_list ap, int len) {
	unsigned int n = va_arg(ap, unsigned int);
	len += ft_putnumb_base(n, 16, "0123456789abcdef");
	return ft_printf_lenght(fmt, ap, len);
}

static int ft_printf_X(const char *fmt, va_list ap, int len) {
	unsigned int n = va_arg(ap, unsigned int);
	len += ft_putnumb_base(n, 16, "0123456789ABCDEF");
	return ft_printf_lenght(fmt, ap, len);
}

static int ft_printf_s(const char *fmt, va_list ap, int len) {
	const char *s = va_arg(ap, const char *);
	if (s == NULL) {
		s = "(null)";
	}
	while (*s) {
		ft_putchar(*s++);
		len++;
	}
	return ft_printf_lenght(fmt, ap, len);
}
int ft_flags(int *flags)
{
    
}
typedef int (*ft_print_dispatch_f)(const char *fmt, va_list ap, int len);

static ft_print_dispatch_f const ft_print_dispatch[256] = {
	['c'] = ft_printf_c,
	['d'] = ft_printf_d,
	['i'] = ft_printf_d,
	['o'] = ft_printf_o,
	['u'] = ft_printf_u,
	['x'] = ft_printf_x,
	['X'] = ft_printf_X,
	['s'] = ft_printf_s
};
static int ft_printf_lenghtsub(const char *fmt, va_list ap, int len)
{
    int c;
    while (*fmt)
    {
        c = (unsigned char)*fmt++;
		if (c != '%') {
			ft_putchar(c);
			len++;
		} else {
			c = (unsigned char)*fmt++;
			if (ft_print_dispatch[c] == NULL) {
				if (c == '\0')
					break;
				if(isflag(c, ap, len) == NULL) 
                    ft_putchar(c);
				len++;
			} else {
				return ft_print_dispatch[c](fmt, ap, len);
			}
            
		}
    }
    return (len);
}

static int ft_printf_lenght(const char *fmt, va_list ap, int len) {
    int flags;

    flags = 0;
	len = ft_printf_lenghtsub(fmt, ap, len);
	return len;
}

int ft_vprintf(const char *fmt, va_list ap) {
	return ft_printf_lenght(fmt, ap, 0);
}

int ft_printf(const char *string, ...) {
	va_list ap;
	int n;
	va_start(ap, string);
	n = ft_printf_lenght(string, ap, 0);
	va_end(ap);
	return n;
}

#include <stdio.h>
#define TEST "%d", "t'est beau"
int main(void)
{
       ft_printf ("gregoire 😀");
}
