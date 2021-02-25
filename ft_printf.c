/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 21:35:11 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printffd(const char *str, va_list form)
{
	t_print			data;


	
	return (-1);
}

int	ft_printf(const char *string, ...)
{
	t_print				data;
	const char			*stringdata;

	data.count = 0;
	while (str[data.count])
	{
		if (str[data.count] == '%')
		{
			data.count++;
			data.count = flags_parser(str, &data);
		}
		else
		{
			ft_putchar(str[data.count]);
			data.count++;
		}
	}
	return ()
}
