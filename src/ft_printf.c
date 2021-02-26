/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/26 18:06:20 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int				ft_printf(const char *fmt, ...)
{
	t_print		data;
	const char	*stringdata;

	va_start(data.args, fmt);
	data = (t_print){0, NULL, 0, 0, 0, 0};
	while (fmt[data.strpos])
	{
		if (fmt[data.strpos] == '%')
		{
			data.strpos++;
			data.wordcount += ft_flag_parse(fmt, &data);
		}
		else
		{
			ft_putchar(fmt[data.strpos]);
			data.strpos++;
			data.wordcount++;
		}
	}
	va_end(data.args);
	return (data.wordcount);
}
