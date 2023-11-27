#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const std::string &name);
        Dog(const Dog &obj);
        ~Dog();
        Dog& operator=(const Dog &obj);
        void makeSound() const;
};