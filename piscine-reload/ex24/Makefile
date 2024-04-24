/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:13:31 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 20:13:33 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SRC		= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= ${SRC:.c=.o}

HEAD	= ./includes/ft.h

NAME	= libft.a

AR		= ar rc

LIB		= ranlib

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all