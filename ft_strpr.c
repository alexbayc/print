/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:09:42 by odale-dr          #+#    #+#             */
/*   Updated: 2019/10/07 20:16:47 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_putchars(char c, int *sum)
{
	write(1, &c, 1);
	*sum = *sum + 1;
}

int				ft_putstrs(char *str, int *sum)
{
	int			i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			ft_putchars(str[i], sum);
			i++;
		}
	}
	return (i);
}
