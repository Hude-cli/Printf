# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 17:25:34 by hugde-cl          #+#    #+#              #
#    Updated: 2022/11/16 16:34:50 by hugde-cl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_put_hexa.c ft_putpositive_fd.c ft_sort_di.c \
ft_sort_s.c ft_sort_u.c ft_sort_c.c ft_sort_p.c ft_sort_x.c ft_sort_upperx.c \
ft_format.c ft_counter.c ft_count_hexa.c ft_sort_percent.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : libft ${NAME}

libft:
	make -C libft/ 

${NAME}: ${OBJS}
	cp libft/libft.a ${NAME}
	ar -rcs ${NAME} ${OBJS}
clean: 
	rm -f ${OBJS}

fclean: clean
	make -C libft/ fclean
	rm -f ${NAME}

re: fclean all

.PHONY: libft