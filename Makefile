# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 10:16:15 by kamofoke          #+#    #+#              #
#    Updated: 2019/06/05 10:40:13 by kamofoke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
SRC = ./ft_isascii.c ./ft_memmove.c ./ft_strcmp.c ./ft_strnstr.c ./ft_isdigit.c ./ft_memset.c ./ft_strcpy.c	./ft_strstr.c ./ft_Strrchr.c ./ft_isprint.c	./ft_putchar.c ./ft_strdup.c ./ft_tolower.c ./ft_atoi.c ./ft_memccpy.c ./ft_putnbr.c ./ft_strlcat.c ./ft_toupper.c ./ft_bzero.c ./ft_memchr.c ./ft_putstr.c ./ft_strlen.c ./ft_isalnum.c ./ft_memcmp.c ./ft_strcat.c ./ft_strncmp.c ./ft_isalpha.c ./ft_memcpy.c ./ft_strchr.c ./ft_strncpy.c

OBJECTS = $(SRC:.c=.o)

All: $(NAME)
$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
