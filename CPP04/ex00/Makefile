# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/28 16:59:47 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -pedantic -g3

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp 
			${CC} -c ${CFLAGS}  $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

