/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:02:52 by odale-dr          #+#    #+#             */
/*   Updated: 2019/10/07 20:23:57 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_emptys(char *f, int *sum, char *c)
{
	int			x;

	x = 0;

	while (*f != 's' && ft_isdigit(*f) != 0)
	{
		x = ((int)(*f) - 48) + x * 10;
		f++;
	}
	ft_pr_empty(x - ft_strlen(c), ' ', sum);
	return (f);
}

void			ft_mod_s(char *f, va_list *fac, int *sum)
{
	char		*c;
	char		flag;

	flag = *f;
	c = va_arg(*fac, char *);
	if (flag == '-')
		ft_putstrs(c, sum);
	while (*f != 's')
	{
		if (ft_isdigit(*f) != 0)
			f = ft_emptys(f, sum, c);
		else
			f++;
	}
	if (flag != '-')
		ft_putstrs(c, sum);
}
