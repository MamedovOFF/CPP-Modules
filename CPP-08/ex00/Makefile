NAME	=	Conversion

SRCS	=	main.cpp

HEADER	=	easyfind.hpp

OBJ		=	$(SRCS:.cpp=.o)

CC		=	c++

RM		= 	@rm -f

VERSION	=	-std=c++98

FLAGS	=	

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