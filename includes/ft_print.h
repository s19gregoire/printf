/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:30:26 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 19:43:11 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <stdlib.h>

typedef struct	s_print
{
	int			width;
	int			counter;
	const char	*chardata;
}				t_print;

char			*ft_strdup(const char *src);
#endif
