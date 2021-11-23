/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:24:30 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/23 08:10:21 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ft(long nbr)
{
	long	number;
	int		i;

	i = 0;
	number = (long) nbr;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		number = (long) nbr * -1;
		i++;
	}
	while (number > 0)
	{
		i++;
		number /= 10;
	}
	return (i);
}
