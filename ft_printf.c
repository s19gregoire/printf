/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:48:13 by gneve             #+#    #+#             */
/*   Updated: 2021/02/23 13:26:58 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			char_count;

	save = ft_strdup(input);
	char_count = 0;
	va_start(args, input);
	char_count += ft_treat_save(save, args);
	va_end(args);
	free((char *)save);
	return (char_count);
}
