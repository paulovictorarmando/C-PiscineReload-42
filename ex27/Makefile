
NAME = ft_display_file
FLAGS = -Wall -Werror -Wextra
SRC = ./*.c
HD = ./

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

