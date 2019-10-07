/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 19:15:06 by odale-dr          #+#    #+#             */
/*   Updated: 2019/10/07 19:48:54 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_empty(char *f, int *sum)
{
	int			x;

	x = 0;

	while (*f != 'c' && ft_isdigit(*f) != 0)
	{
		x = ((int)(*f) - 48) + x * 10;
		f++;
	}
	ft_pr_empty(x - 1, ' ', sum);
	return (f);
}

void			ft_char(char *f, va_list *fac, int *sum)
{
	char		c;
	char		flag;

	flag = *f;
	c = va_arg(*fac, int);
	if (flag == '-')
		ft_putchars(c, sum);
	while (*f != 'c')
	{
		if (ft_isdigit(*f) != 0)
			f = ft_empty(f, sum);
		else
			f++;
	}
	if (flag != '-')
		ft_putchars(c, sum);
}
