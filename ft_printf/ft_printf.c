/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:38:22 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 01:40:47 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_flag(va_list argprt, char flag, int *count)
{
	if (flag == 'c')
		ft_putcharcount(va_arg(argprt, int), count);
	if (flag == 's')
		ft_putstrcount(va_arg(argprt, char *), count);
	if (flag == 'd' || flag == 'i')
		ft_putnbrcount(va_arg(argprt, int), count);
	if (flag == 'u')
		ft_putunsigned(va_arg(argprt, unsigned int), count);
	if (flag == 'x')
		ft_hexa(va_arg(argprt, unsigned int), count);
	if (flag == 'X')
		ft_hexax(va_arg(argprt, unsigned int), count);
	if (flag == 'p')
	{
		ft_putstrcount("0x", count);
		ft_hexa(va_arg(argprt, unsigned long long), count);
	}
	if (flag == '%')
		ft_putcharcount('%', count);
}

int	ft_printf(const char *set_arg, ...)
{
	va_list	argprt;
	int		i;
	int		size;

	va_start(argprt, set_arg);
	i = 0;
	size = 0;
	while (set_arg[i])
	{
		if (set_arg[i] == '%')
		{
			i++;
			detect_flag(argprt, set_arg[i], &size);
		}
		else
			ft_putcharcount(set_arg[i], &size);
		i++;
	}
	return (size);
}
