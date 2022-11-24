/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:43:21 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 01:44:11 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharcount(char c, int *counter)
{
	write (1, &c, 1);
	*counter += 1;
}
// #include <stdio.h>
// int main()
// {
//     int counter =0;
//     ft_putcharcount('b',&counter);
//     ft_putcharcount('b',&counter);
//     ft_putcharcount('b',&counter);
//     ft_putcharcount('b',&counter);
//     printf("%i",counter);

// }
