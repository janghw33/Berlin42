# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhyeongw <jhyeongw@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 21:29:35 by jhyeongw          #+#    #+#              #
#    Updated: 2024/04/24 21:29:44 by jhyeongw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

INCLUDES = ./includes/*.h

OBJECTS = ./*.o

GCC = gcc -Wall -Werror -Wextra

AR = ar -rc

all : $(NAME)

$(NAME) :
	$(GCC) -c $(SRCS) -I $(INCLUDES)
	$(AR) $(NAME) $(OBJECTS)

clean :
	/bin/rm -Rf $(OBJECTS)

fclean : clean
	/bin/rm -Rf $(NAME)

re : fclean all
