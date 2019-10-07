/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:23:27 by odale-dr          #+#    #+#             */
/*   Updated: 2019/10/07 20:19:52 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			typing(char x, char *f, va_list *fac, int *sum)
{ 
	if (x == 'c')
		ft_char(f, fac, sum);

	if (x == 's')
		ft_mod_s(f, fac, sum);
	
}

void			flag(int *s, char *ff, va_list *fac, int *sum)
{
	int			i;
	char		x;
	char		*f;

	i = 0;
	f = ff + *s + 1;
	while ( f[i] != '\0')
	{
		x = f[i];
		if (x == 'c' || x == 's' || x == 'p')
		{
			typing(x, f, fac, sum);
			break ;
		}
		i++;
	}
	if ( f[i] != '\0')
		*s = *s + i + 1;
}

void			readp(int *sum, char *f, va_list *fac)
{
	int			i;

	i = 0;
	if (f!= NULL)
	{
		while (f[i] != '\0')
		{
			if (f[i] == '%')
				flag(&i, f, fac, sum);
			else
				ft_putchars(f[i], sum);
			i++;
		}
	}
	
}

int				ft_printf(const char *form, ...)
{
	int			sum;
	va_list		factor;         // указатель на необязательный параметр
	char 		*c;

	sum = 0;
	va_start(factor, form);   // устанавливаем указатель
	c = (char*)form;
	readp(&sum, c, &factor);

	return (sum);
}
