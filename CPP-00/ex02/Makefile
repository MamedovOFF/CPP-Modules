NAME	=	Account

SRCS	=	test.cpp Account.cpp

HEADER	=	Account.hpp

OBJ		=	$(SRCS:.cpp=.o)

CC		=	c++

RM		= @rm -f

VERSION	= -std=c++98

FLAGS	= -Wall -Wextra -Werror

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(VERSION) $(FLAGS) $(OBJ) -o $(NAME) 

%.o:		%.cpp $(HEADER)
			$(CC) $(VERSION) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ) $(OBJ_B)

fclean	:	clean
			@$(RM) $(NAME)

re		: 	fclean all