#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

template <class T>
typename T::iterator easyfind( T parameter, int val) 
{
    typename T::iterator iter = std::find(parameter.begin(), parameter.end(), val);

    if (iter != parameter.end())
        return iter;
    else
        throw std::invalid_argument("Exception: Number not found");

}
#endif