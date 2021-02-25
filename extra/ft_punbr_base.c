/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punbr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:07:35 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 20:17:55 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_putnbr_base(unsigned long long num, int b, const char *data)
{
	int	basen;

	basen = 1;
	if (num >= basen)
		basen += ft_putnbr_base(num / b, b, data);
	ft_putchar(data[num % b]);
}
