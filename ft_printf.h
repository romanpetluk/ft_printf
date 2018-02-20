/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetluk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:10:38 by rpetluk           #+#    #+#             */
/*   Updated: 2018/02/19 16:49:45 by rpetluk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

typedef struct	s_flag
{
	int	i;
	int	size;
	int	width;
	int	accuracy;
	int	p;
	int	sign;
	int	hesh;
	int	n;
}				t_flag;

int				g_count;

int				ft_printf(const char *format, ...);
int				ft_printf_find_flag(char c, t_flag *flags);
void			ft_printf_putchar(char c);
void			ft_putchar_width(char c, t_flag flags);
void			ft_printf_putstr(char *s);
void			ft_printf_width(t_flag *flags);
void			ft_putstr_width(char *s, t_flag flags);
t_flag			ft_printf_size(t_flag flags, char c);
void			ft_printf_typeifsize(t_flag flags, char c, va_list ap);
void			ft_putstr_width(char *s, t_flag flags);
void			ft_printf_putstrn(char *s, int k);
void			ft_putnbr_l(long long n, t_flag flags);
void			ft_putnbr_unl(unsigned long long n, t_flag flags);
void			ft_putnbr_ll(unsigned long long n);
void			ft_printf_putbasex(unsigned long long n);
void			ft_printf_basexnwidth(unsigned long long n, t_flag *flags);
void			ft_putnbr_pointer(unsigned long n, t_flag flags);
void			ft_putnbr_base_width(unsigned long long n, t_flag flags);
void			ft_printf_widthnbr(t_flag *flags);
void			ft_putnbr_basex_width(unsigned long long n, t_flag flags);
void			ft_putnbr_basexx_width(unsigned long long n, t_flag flags);
void			ft_printf_unic(unsigned int n, t_flag flags);
void			ft_putstr_uniswidth(wchar_t *s, t_flag flags);
void			ft_make_unicode(unsigned int b);
void			ft_printf_typechars(va_list ap, t_flag flags);
void			ft_printf_reintwidth
				(va_list ap, const char *format, t_flag *flags);
void			ft_printf_reintaccuraty
				(va_list ap, const char *format, t_flag *flags);
void			ft_printf_typeint(t_flag flags, va_list ap);
void			ft_printf_typeunint(t_flag flags, va_list ap);
void			ft_printf_typebase(t_flag flags, va_list ap);
void			ft_printf_typebasex(t_flag flags, va_list ap);
void			ft_printf_typebasexx(t_flag flags, va_list ap);
void			ft_printf_unis(wchar_t *s);

#endif
