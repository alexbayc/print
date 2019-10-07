# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odale-dr <odale-dr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/02 21:40:05 by htillman          #+#    #+#              #
#    Updated: 2019/10/07 20:20:18 by odale-dr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
SRC = main.c ft_printf.c ft_strpr.c ft_char.c ft_pr_empty.c ft_mod_s.c 
FILESO = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
LIBA = -L ./libft -lft

all: $(NAME)

$(NAME):
	gcc  $(SRC) $(LIBA) -o $(NAME)
clean:
	rm -f $(FILESO)
fclean: clean
	rm -f $(NAME)
re: fclean all
