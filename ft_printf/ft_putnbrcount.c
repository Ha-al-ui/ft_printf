/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:45:04 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 06:05:38 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrcount(int n, int *count)
{
	int	d;
	int	m;

	if (n == -2147483648)
	{
		ft_putstrcount("-2147483648", count);
		return ;
	}
	else if (n < 0)
	{
		ft_putcharcount('-', count);
		n *= (-1);
		ft_putnbrcount(n, count);
	}
	else if (n >= 10)
	{
		m = n % 10;
		d = n / 10;
		n = d;
		ft_putnbrcount(n, count);
		ft_putcharcount(m + '0', count);
	}
	else
		ft_putcharcount(n + '0', count);
}
// int main()
// {
//     int count ;
//     ft_putnbrcount(45,&count);
//     printf("\n%d",count);
// }
