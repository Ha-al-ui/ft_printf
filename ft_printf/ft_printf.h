/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:36:33 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/24 01:42:33 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *arg, ...);
void	ft_putcharcount(char c, int *counter);
void	ft_putstrcount(char *s, int *count);
void	ft_hexa(unsigned long n, int *count);
void	ft_hexax(unsigned long n, int *count);
void	ft_putnbrcount(int n, int *count);
void	ft_putunsigned(unsigned int n, int *count);
void	detect_flag(va_list argprt, char flag, int *count);

#endif
