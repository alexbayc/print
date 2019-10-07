/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 21:47:46 by htillman          #+#    #+#             */
/*   Updated: 2019/10/07 20:20:10 by odale-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>

//del
# include <stdio.h>

int				ft_printf(const char *form, ...);
int				ft_putstrs(char *str, int *sum);
void			ft_putchars(char c, int *s);
void			ft_char(char *f, va_list *fac, int *sum);
void				ft_pr_empty(int n, char c, int *sum);
void			ft_mod_s(char *f, va_list *fac, int *sum);

#endif
