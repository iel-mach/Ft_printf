/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:22:19 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/23 08:15:10 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_putnbr(int nbr);
int	ft_strlen(const char *s);
int	ft_len(unsigned long nbr, int base);
int	ft_adresse(unsigned long nbr);
int	ft_ft(long nbr);

#endif