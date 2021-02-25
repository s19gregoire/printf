/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 21:25:35 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printffd(const char *str, va_list form)
{
	t_print			data;

	data.count = 0;
	while (1)
	{
		if (!str[data.count])
			break ;
		else if (str[data.count] && str[data.count] == '%')
		{
			data.count++;
			data.count = flags_parser(str, &data);
		}
	}
}

int	ft_printf(const char *string, ...)
{
	t_print				formater;
	const char			*stringdata;

	formater.wordcount += ft_printffd(stringdata, formater.format);
	return (formater.wordcount);
}
