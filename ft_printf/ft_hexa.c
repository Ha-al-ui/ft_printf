/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:23:47 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 06:05:12 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long n, int *count)
{
	char	*base ;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hexa(n / 16, count);
		ft_hexa(n % 16, count);
	}
	else
		ft_putcharcount(base[n], count);
}

void	ft_hexax(unsigned long n, int *count)
{
	char	*base ;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexax(n / 16, count);
		ft_hexax(n % 16, count);
	}
	else
		ft_putcharcount(base[n], count);
}
// int main()
// {
// 	int count = 0;
// 	ft_hexa(f, &count);
// }
