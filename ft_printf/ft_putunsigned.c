/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:47:22 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 01:48:20 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *count)
{
	int	d;
	int	m;

	if (n >= 10)
	{
		m = n % 10;
		d = n / 10;
		n = d;
		ft_putunsigned(n, count);
		ft_putcharcount(m + '0', count);
	}
	else if (n >= 0 && n < 10)
		ft_putcharcount(n + '0', count);
}
