#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>
# include <cctype>

template<class T>
class Array
{
private:
	size_t length;
	T *arr;
public:
	Array(void);
	Array(unsigned int n);
	Array( const Array & ref_Point);
	~Array();

	class OutOfBoundsException: public std::exception {
		virtual const char* what() const throw();
	};

	Array &operator=(Array const &other);
	T &operator[](size_t index);

	int size() const;
};

#include "Array.tpp"

#endif