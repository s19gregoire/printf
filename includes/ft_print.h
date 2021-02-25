/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:30:26 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 21:13:33 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef	int	t_bitflag;

enum		e_bitflags
{
	F_SPC = 1,
	F_ZRO = (1 << 1),
	F_ZRO = (1 << 2),
	F_NEG = (1 << 3),
	F_DOT = (1 << 4),
	F_STAR = (1 << 5),
};

typedef struct	s_printtread
{
	t_bitflag	flags;
	int			width;
	int			count;
	int			wordcount;
	va_list		format;
}				t_print;

char			*ft_strdup(const char *src);
char			ft_putchar(char l);
size_t			ft_strlen(const char *str);
int				ft_putnbr_base(unsigned long long num, int b, const char *data);
#endif
