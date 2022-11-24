/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:45:59 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 01:46:41 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrcount(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	s = "(null)";
	while (s[i])
	{
		ft_putcharcount(s[i++], count);
	}
}
