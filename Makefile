# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 10:16:15 by kamofoke          #+#    #+#              #
#    Updated: 2019/06/06 17:26:50 by kamofoke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_isascii.c ./ft_strncat.c ./ft_strcmp.c ./ft_isdigit.c ./ft_memset.c ./ft_strcpy.c ./ft_isprint.c ./ft_putchar.c ./ft_tolower.c ./ft_atoi.c ./ft_memccpy.c ./ft_strlcat.c ./ft_toupper.c ./ft_bzero.c ./ft_memchr.c ./ft_putstr.c ./ft_strlen.c ./ft_isalnum.c ./ft_memcmp.c ./ft_strcat.c ./ft_isalpha.c ./ft_memcpy.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strdup.c ./ft_strchr.c ./ft_memmove.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
