# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/28 18:41:05 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRCS = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotmyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -std=c++98 -g3 -pedantic

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp 
			${CC} ${CFLAGS} ${HEADER} $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

