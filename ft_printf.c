/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 21:01:45 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printffd(const char *str, va_list form)
{
	t_print			formater;

	formater.count = 0;
	while (1)
	{
		if (!str[formater.count])
			break ;
		else if (str[formater.count] == '%' && str[formater.count + 1])
		{
			formater.count = flags_parser(str, ++formater.count, &flags, form);
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
