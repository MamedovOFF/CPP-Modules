#ifndef CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define ASCII_THREE      \
"    oxoxoo    ooxoo\n"  \
"  ooxoxo oo  oxoxooo\n" \
" oooo xxoxoo ooo ooox\n"\
" oxo o oxoxo  xoxxoxo\n"\
"  oxo xooxoooo o ooo\n" \
"    ooo'\'oo'\'  /o/o\n"\
"        '\'  '\'/ /\n"  \
"         |   /\n"       \
"         |  |\n"        \
"         | D|\n"        \
"         |  |\n"        \
"         |  |\n"        \
"  ______/____'\'____\n" \

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm( const ShrubberyCreationForm & ref_Point);

	ShrubberyCreationForm &operator = ( const ShrubberyCreationForm & ref_Point);

	void beSigned(Bureaucrat & bureaucrat);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
};


#endif