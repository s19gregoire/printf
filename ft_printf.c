/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 20:27:20 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printffd(const char *stringdata, va_list format)
{
	t_print			formater;
	t_flagstread	flags;

	formater.counter = 0;
	while (1)
	{
		flags = ft_flags_initiator();
	}
}

int	ft_printf(const char *string, ...)
{
	t_print				formater;
	const char			*stringdata;

	formater.counter += ft_printffd(stringdata, formater.format);
}
