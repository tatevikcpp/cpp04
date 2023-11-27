#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    // this->_type = "Dog";
    std::cout << "Dog construtor" << std::endl;
}

Dog::Dog(const std::string &name)
{
    this->_type = name; 
    std::cout << "Dog param construtor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    this->_type = obj._type;
    std::cout << "Dog copy construtor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destrutor" << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "Dog operator= " << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "haf" << std::endl;
}