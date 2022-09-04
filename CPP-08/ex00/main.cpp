#include <vector>
#include <set>
#include "iostream"
#include "easyfind.h"



int main () {
    std::vector<int> iter;
    iter.reserve(10);
    
    for (int i = 0; i <= 10; i++) {
             iter.push_back(i);
             std::cout << i << std::endl;
    }
    
    try {
        std::cout << "Find: " << *easyfind(iter,3) << std::endl;
    } catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    try {
         std::cout << "Find: " << *easyfind(iter,24) << std::endl;
    } catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Find: " << *easyfind(iter,10) << std::endl;
    } catch (std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}