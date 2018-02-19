/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetluk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:32:41 by rpetluk           #+#    #+#             */
/*   Updated: 2018/02/15 14:32:42 by rpetluk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_printf_basepnwidth(unsigned long long n, s_flag *flags)
{
    if (flags->hesh == 1 && n)
        flags->width -= 2;
    if (!n)
        flags->width--;
    if (flags->sign == 2)
        flags->width--;
    else if (flags->sign == 1 && flags->p == 2)
        flags->width--;
    if (flags->accuracy < 0)
        while (n != 0)
        {
            n /= 16;
            flags->width--;
        }
    else
    {
        while (n != 0)
        {
            n /= 16;
            flags->width--;
            flags->accuracy--;
        }
        if (flags->accuracy > 0)
            flags->width -= flags->accuracy;
    }
}

void	ft_putnbr_pointer(unsigned long n, s_flag flags)
{
	flags.hesh = 1;
    flags.sign = 0;
	if ((!n && flags.accuracy > -1))
		flags.n = 0;
	if (!n && flags.width > 0)
		flags.width -= 2;
	if (flags.width > 0 || flags.accuracy > -1)
		ft_printf_basepnwidth(n, &flags);
	if (flags.p == 1)
	{
		ft_printf_putchar('0');
		ft_printf_putchar('x');
	}
	if (flags.p != 2)
		ft_printf_widthnbr(&flags);
	if (flags.p != 1)
	{
		ft_printf_putchar('0');
		ft_printf_putchar('x');
	}
	while (flags.accuracy-- > 0)
		ft_printf_putchar('0');
	if (flags.n)
		ft_printf_putbasex(n);
	if (flags.p == 2)
		ft_printf_widthnbr(&flags);
}

//static void ft_printf_basebnwidth(unsigned long long n, s_flag *flags)
//{
//    if (flags->hesh == 1)
//        flags->width--;
//    if (flags->sign == 2)
//        flags->width--;
//    else if (flags->sign == 1 && flags->p == 2)
//        flags->width--;
//    if (flags->accuracy < 0)
//        while (n != 0)
//        {
//            n /= 2;
//            flags->width--;
//        }
//    else
//    {
//        while (n != 0)
//        {
//            n /= 2;
//            flags->width--;
//            flags->accuracy--;
//        }
//        if (flags->accuracy > 0)
//            flags->width -= flags->accuracy;
//    }
//}
//
//static void ft_printf_putbaseb(unsigned long long n)
//{
//    if (n > 1)
//    {
//        ft_printf_putbase(n / 2);
//        ft_printf_putchar((n % 2) + 48);
//    }
//    else
//        ft_printf_putchar(n + 48);
//}
//
//void    ft_putnbr_baseb_width(unsigned long long n, s_flag flags)
//{
//    if (flags.accuracy > -1 && !n)
//        flags.n = 0;
//    if (flags.width > 0 || flags.accuracy > -1)
//        ft_printf_basebnwidth(n, &flags);
//    if (flags.p != 2)
//        ft_printf_widthnbr(&flags);
//    if ((flags.hesh == 1 && flags.accuracy < 1 && n) ||
//        (flags.hesh == 1 && flags.accuracy > -1 && !n))
//        ft_printf_putchar('0');
//    while (flags.accuracy-- > 0)
//        ft_printf_putchar('0');
//    if (flags.n)
//        ft_printf_putbaseb(n);
//    if (flags.p == 2)
//        ft_printf_widthnbr(&flags);
//}
