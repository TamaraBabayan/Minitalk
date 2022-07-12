NAME1 = server
NAME2 = client

SRCS = $(shell find "." -name "*.c")

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = ./libft

LINKER = -L$(INCLUDE) -lft

.c.o : 
	$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

all : $(NAME1) $(NAME2)

$(NAME1) : $(OBJS)
	$(MAKE) -C $(INCLUDE)
	$(CC) $(FLAGS) -I$(INCLUDE) $(LINKER) server.o -o $(NAME1)
	
$(NAME2) : $(OBJS)
	$(CC) $(FLAGS) -I$(INCLUDE) $(LINKER) client.o -o $(NAME2)

clean : 
	rm -f $(OBJS)
	$(MAKE) clean -C $(INCLUDE)

fclean : clean
	rm -f client server
	$(MAKE) fclean -C $(INCLUDE)

re : fclean all

.PHONY: all clean re fclean
