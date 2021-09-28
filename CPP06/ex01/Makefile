# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/28 18:48:15 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

SRCS =  main.cpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -g3 -pedantic -std=c++98

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp 
			${CC} -c ${CFLAGS} $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

