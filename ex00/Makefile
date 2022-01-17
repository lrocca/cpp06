CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	convert
FILES	=	convert.cpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean: ;

fclean: clean
	$(RM) $(NAME)

re: fclean all
