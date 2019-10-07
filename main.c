/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 17:57:30 by nevanna           #+#    #+#             */
/*   Updated: 2019/10/07 20:24:31 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void display(char* format, ...)
{
    int d; 
    double f;
    va_list factor;         // указатель на необязательный параметр
    va_start(factor, format);   // устанавливаем указатель
	char 	*c;

	c = format;
    ft_putstr("\n --->");
    while (*c)
    {
		if (*c == '%')
		{
			c++;
			if (*c == 'd')
			{
				d = va_arg(factor, int);
				ft_putstr(ft_itoa(d));
			}
			else 
			{
				if (*c == 'd')
				{
					d = va_arg(factor, int);
					ft_putstr(ft_itoa(d));
				}
			}
		}
		else
			ft_putchar(*c);
		c++;
    }
	ft_putstr("<---\n");
    va_end(factor);
}

int			main(int argc, char **argv)
{
	int		x;
	char	*q;
	float    f;
	char		g;
	char		j;

	g = 'K';
	x = 0;
	//display("Age:%d \t Weight:%d", 24, 68);
	q = argv[1];
	ft_putstr(" \n START");
	if (argv[1] == NULL)
	{
		ft_putstr("\nSelect str");
		return (0);
	}
	ft_putstr(argv[0]);
	g = '#';
	j = 'J';
	ft_putstr("\n\n----------------->");
	x = ft_printf("%-2c 456789%2c %2c", g, j, j);
	ft_putstr("<<-----------------\n");
	printf("\n---->%4s<----\n", q);
	ft_putstr("\n Kolichestvo simvolov = ");
	ft_putstr(ft_itoa(x));

	ft_putstr("\n\n----------------->");
	x = ft_printf("%-2s", q);
	ft_putstr("<<-----------------\n");
	ft_putstr("\n Kolichestvo simvolov = ");
	ft_putstr(ft_itoa(x));
	
	return (x);
}
