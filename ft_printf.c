/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 21:39:15 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printf(const char *fmt, ...)
{
	t_print				data;
	const char			*stringdata;

	data.strpos = 0;
	data.wordcount = 0;
	while (fmt[data.strpos])
	{
		if (fmt[data.strpos] == '%')
		{
			data.strpos++;
			data.wordcount += flags_parser(fmt, &data);
		}
		else
		{
			ft_putchar(fmt[data.strpos]);
			data.strpos++;
		}
	}
	return (data.wordcount);
}
