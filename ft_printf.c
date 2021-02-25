/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:23:44 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 19:42:42 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printf(const char *string, ...)
{
	t_print formater;
	va_list	format;

	formater.counter += ft_printffd(formater.chardata);
}
