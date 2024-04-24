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