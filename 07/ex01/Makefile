# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 23:16:40 by yohlee            #+#    #+#              #
#    Updated: 2020/10/01 23:49:49 by yohlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS = iter.cpp
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