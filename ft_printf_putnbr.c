/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetluk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:52:52 by rpetluk           #+#    #+#             */
/*   Updated: 2018/02/15 15:03:45 by rpetluk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_widthnbr(s_flag *flags)
{
	char	sig;

	if (flags->sign == 2 && flags->p == 1)
		ft_printf_putchar('+');
	else if (flags->sign == 1 && flags->p == 1)
		ft_printf_putchar(' ');
	if (flags->p == 1 && flags->accuracy < 0)
		sig = '0';
	else
		sig = ' ';
	while (flags->width-- > 0)
		ft_printf_putchar(sig);
}

static void	ft_printf_strnwidth(long long n, s_flag *flags)
{
	if (flags->sign != 0 || n < 0)
		flags->width--;
	else if (flags->sign == 1 && flags->p == 2)
		flags->width--;
	if (flags->accuracy < 0)
		while (n != 0)
		{
			n /= 10;
			flags->width--;
		}
	else
	{
		while (n != 0)
		{
			n /= 10;
			flags->width--;
			flags->accuracy--;
		}
		if (flags->accuracy > 0)
			flags->width -= flags->accuracy;
	}
}

void		ft_putnbr_l(long long n, s_flag flags)
{
	if (flags.accuracy == 0 && !n)
		flags.n = 0;
	if (flags.width > -1 && flags.accuracy < 0 && n == 0)
		flags.width--;
	if (flags.p == 1 && flags.accuracy > -1)
		flags.p = 0;
	if (flags.width > 0 || flags.accuracy > -1)
		ft_printf_strnwidth(n, &flags);
	if (n < 0 && flags.p == 1)
	{
		ft_printf_putchar('-');
		flags.sign = 0;
		n *= -1;
	}
	if (flags.p != 2)
		ft_printf_widthnbr(&flags);
	if (n < 0 && flags.p != 1)
	{
		ft_printf_putchar('-');
		flags.sign = 0;
		n *= -1;
	}
	if (flags.sign == 2 && flags.p != 1)
		ft_printf_putchar('+');
	else if (flags.sign == 1 && flags.p != 1)
		ft_printf_putchar(' ');
	if (flags.accuracy > 0 && n == 0)
		flags.accuracy--;
	while (flags.accuracy-- > 0)
		ft_printf_putchar('0');
	if (flags.n)
		ft_putnbr_ll(n);
	if (flags.p == 2)
		ft_printf_widthnbr(&flags);
}

void		ft_putnbr_unl(unsigned long long n, s_flag flags)
{
	if (flags.accuracy == 0 && !n)
		flags.n = 0;
	if (flags.p == 1 && flags.accuracy > -1)
		flags.p = 0;
	if (flags.width > 0 || flags.accuracy > -1)
		ft_printf_strnwidth(n, &flags);
	if (flags.p != 2)
		ft_printf_widthnbr(&flags);
	if (flags.sign == 2 && flags.p != 1)
		ft_printf_putchar('+');
	else if (flags.sign == 1)
		ft_printf_putchar(' ');
	if (flags.accuracy > 0 && n == 0)
		flags.accuracy--;
	while (flags.accuracy-- > 0)
		ft_printf_putchar('0');
	if (flags.n)
		ft_putnbr_ll(n);
	if (flags.p == 2)
		ft_printf_widthnbr(&flags);
}
