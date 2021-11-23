/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:16:10 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/23 08:09:23 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adresse(unsigned long nbr)
{
	ft_putstr("0x");
	ft_putnbr_base(nbr, "0123456789abcdef");
	return (ft_len(nbr, 16) + 2);
}
