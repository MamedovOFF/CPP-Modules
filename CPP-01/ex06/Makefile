NAME	=	Harl

SRCS	=	main.cpp Harl.cpp

HEADER	=	Harl.hpp

OBJ		=	$(SRCS:.cpp=.o)

CC		=	C++

RM		= 	@rm -f

VERSION	=	-std=c++98

FLAGS	=	-Wall -Wextra -Werror

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