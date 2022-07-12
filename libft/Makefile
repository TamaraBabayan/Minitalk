# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 18:58:36 by tbabayan          #+#    #+#              #
#    Updated: 2022/03/21 18:59:02 by tbabayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= $(shell find "." -name "*.c" ! -name "ft_lst*.c")
BSRCS	= $(shell find "." -name "ft_lst*.c")
OBJS	= ${SRCS:.c=.o}
BOBJS	= ${BSRCS:.c=.o}
CC		= gcc
LIB		= ar rcs
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${LIB} $(NAME) ${OBJS}

bonus : ${BOBJS}
	${LIB} ${NAME} ${BOBJS}

all : $(NAME)

clean :	
	${RM} ${OBJS} ${BOBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re bonus
