/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:03:54 by gneve             #+#    #+#             */
/*   Updated: 2021/02/25 20:28:38 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

t_flagstread	ft_flags_initiator(void)
{
	t_flagstread flags;

	flags.dotpoint = -1;
	flags.dotminus = 0;
	flags.dotwidth = 0;
	flags.dotzero = 0;
	flags.dotstar = 0;
	flags.type = 0;
	return (flags);
}
