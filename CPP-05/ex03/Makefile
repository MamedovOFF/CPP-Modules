NAME	=	Form

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

HEADER	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

OBJ		=	$(SRCS:.cpp=.o)

CC		=	c++

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