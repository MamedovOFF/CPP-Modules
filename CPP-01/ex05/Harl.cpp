#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void ) {
	std::cout << "DEBUG" << std::endl; 
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void ) {
	std::cout << "INFO" << std::endl; 
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void ) {
	std::cout << "WARNING" << std::endl; 
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month.\n";
}

void Harl::error( void ) {
	std::cout << "ERROR" << std::endl; 
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level ) {
	void (Harl::*current_method[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i ++) {
		if (level == levels[i]) {
			(this->*current_method[i])();
		}
	}	
}