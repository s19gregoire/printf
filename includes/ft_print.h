/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:30:26 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 20:02:30 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_print
{
	int			width;
	int			counter;
	va_list		format;
}				t_print;
typedef struct	s_flags
{
	int			dotminus;
	int			dotzero;
	int			dotpoint;
	int			dotstar;
}				t_flags;

char			*ft_strdup(const char *src);
char			ft_putchar(char l);
#endif
