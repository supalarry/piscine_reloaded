NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = ./includes/

all: $(NAME)

$(NAME): 
	gcc -c $(SRCS) -I $(HEADER) -Wall -Wextra -Werror
	ar rc $(NAME) $(OBJECTS)
	ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all

