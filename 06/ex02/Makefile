# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 04:01:40 by yohlee            #+#    #+#              #
#    Updated: 2020/10/01 21:32:50 by yohlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}

CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Program name: '${NAME}' making start!"
	@${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}
	@echo "Program has been compiled successfully."

clean:
	@echo "Remove Object Files."
	@rm -f ${OBJS}

fclean: clean
	@echo "Remove Object Files and Program name: '${NAME}'"
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re