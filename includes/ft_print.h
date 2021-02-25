/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:30:26 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 20:10:21 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_printtread
{
	int			width;
	int			counter;
	va_list		format;
}				t_print;
typedef struct	s_flagstread
{
	int			dotminus;
	int			dotzero;
	int			dotpoint;
	int			dotstar;
}				t_flags;

char			*ft_strdup(const char *src);
char			ft_putchar(char l);
size_t			ft_strlen(const char *str);
#endif
