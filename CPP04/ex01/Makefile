# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/28 16:59:36 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -pedantic -g3

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp 
			${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

