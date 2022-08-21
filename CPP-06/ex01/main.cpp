#include <iostream>

struct Data {
	std::string 	first_name;
	std::string     last_name;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
     return reinterpret_cast<Data *>(raw);
}

int main () {
    Data person;
    uintptr_t point;
    person.first_name = "Alex";
    person.last_name = "Ivanov";

    std::cout << "Begin: " << person.first_name << " " <<person.last_name << std::endl;
    point = serialize(&person);
    std::cout << point << std::endl;
    Data des_person = *deserialize(point);
    std::cout << "After: " << des_person.first_name << " " << des_person.last_name << std::endl;
    return 1;
}