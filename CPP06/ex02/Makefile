# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/23 17:33:08 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRCS =  main.cpp Base.cpp A.cpp B.cpp C.cpp

HEADER = Base.hpp A.hpp B.hpp C.hpp 

CC = clang++

CFLAGS = -Wextra -Werror -Wall

OBJS = ${SRCS:.cpp=.o}

.c.o: 
			@${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

