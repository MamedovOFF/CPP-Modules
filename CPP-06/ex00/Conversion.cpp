#include "Conversion.hpp"

Conversion::Conversion(void){}

Conversion::Conversion(char *value)
{
    double 		rep;
    if ((static_cast<std::string>(value)).length() == 1 && !std::isdigit(value[0]))
       rep = value[0];
    else {
        rep = atof(value);
        if (value[(static_cast<std::string>(value)).size() - 1] == 'f') {
            this->flag = 1;
        }
    }

    this->printChar(value);
 	this->printInt(rep);
	this->printFloat(rep);
	this->printDouble(rep);
}

Conversion::Conversion( const Conversion &) {}

Conversion &Conversion::operator=(const Conversion &) 
{
	return (*this);
}

Conversion::~Conversion()
{
}

void Conversion::printChar(char *value) {
	char 		*end = NULL;
	double 		rep;

	rep = std::strtof(value, &end);
	if (!*end  || this->flag == 1) {
		if (!isprint(static_cast<char>(rep)) && !std::isnan(rep) && !std::isinf(rep)) {
			std::cout << "char: Non displayable" << std::endl;
		}
		else if (std::isnan(rep) || std::isinf(rep)) {
			std::cout << "char: impossible" << std::endl;
		}
		else {
			std::cout << "char: " << static_cast<char>(rep) << std::endl;
		}
	}
	else {
		std::string 		line(value);
		if (line.length() == 1) {
			if (!isprint(value[0])) {
				std::cout << "char: Non displayable" << std::endl;
			}
			else {
				std::cout << "char: " << value << std::endl;
			}
		}
		else {
			std::cout << "char: impossible" << std::endl;
		}
	}
}

void 		Conversion::printInt(double rep) {
	if (std::isnan(rep) || std::isinf(rep)) {
		std::cout << "int: impossible" << std::endl;
	}
	else {
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
	}
}

void 		Conversion::printFloat(double rep) {
	if (!(rep - static_cast<int>(rep))) {
		std::cout << std::fixed << std::setprecision(1) <<"float: " << static_cast<float>(rep) << "f" << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(rep) << "f" << std::endl;
	}
}

void 		Conversion::printDouble(double rep) {
	double 	i = 0;
	double 	n = 0;

	i = modf(rep, &n);
	if (i) {
		std::cout << "double: " << static_cast<double>(rep) << std::endl;
	}
	else {
		std::cout << "double: " << static_cast<double>(rep) << std::endl;
	}
}
