#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <iostream>
# include <cmath>
# include <climits>
# include <cctype>
# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <sstream>
# include <cstdlib>

class Conversion
{
private:
    int flag;
    void 			printChar(char *value);
    void 			printInt(double value);
	void 			printDouble(double value);
	void 			printFloat(double value);
public:
    Conversion( void );
	Conversion (char *value);
	Conversion( const Conversion &);

	Conversion &operator = ( const Conversion &);
    ~Conversion();
};
#endif