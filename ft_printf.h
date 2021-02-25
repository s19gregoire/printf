/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:00:33 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 14:14:30 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

enum e_flags
{
    F_STAR = 1,
    F_DOT = (1<<1),
    F_ZERO = (1<<2),
    F_NEG = (1<<3)
};

int ft_printf(const char *string, ...);

#endif
