#include <iostream>
#include "inter.hpp"

void foo(char &a){
	a = a + 1;
}

void Xax(std::string &str){
	str = "xax ";
}

void plus_one(int &i){
	i++;
}


int main ( void ){
	char arr[10] = "abcdefghd";
	int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	std::string str[10];

	::inter(arr, 9, foo);
	::inter(str, 10, Xax);
	::inter(b, 10, plus_one);

	std::cout << arr << std::endl;

	for(int i = 0; i < 10; i++)
		std::cout << str[i] << std::flush;
	std::cout << std::endl;
	for(int i = 0; i < 10; i++)
		std::cout << b[i] << " " << std::flush;
	std::cout << std::endl;
	return (0);
}