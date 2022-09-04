#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
private:
	int N;
    std::vector<int> iter;
public:
	Span(void);
	Span(int N);
	Span(const Span &);
	~Span();

	Span &operator = ( const Span &);

	void addNumber(int X);
	int shortestSpan();
	int longestSpan();

	class Full : public std::exception { 
		public:
			const char * what () const throw();
	};
	
	class Error: public std::exception { 
		public:
			const char * what () const throw();
	};
};

#endif