# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhyeongw <jhyeongw@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 21:29:58 by jhyeongw          #+#    #+#              #
#    Updated: 2024/04/24 21:30:00 by jhyeongw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = ft_display_file

SRCS = ./*.c

OBJECTS = ./*.o

HEADER = ./*.h.gch

INCLUDE = ./*.h

GCC = gcc -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	$(GCC) -c $(SRCS) $(INCLUDE)
	$(GCC) $(OBJECTS) -o $(NAME)

clean :
	/bin/rm -Rf $(OBJECTS) $(HEADER)

fclean : clean
	/bin/rm -Rf $(NAME)

re : fclean all
