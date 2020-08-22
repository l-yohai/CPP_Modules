NAME = phonebook

SRCS = phonebook.cpp main.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = clang++
CXXFLAGSS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGSS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all