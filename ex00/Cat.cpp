#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    // this->_type = "Cat";
    std::cout << "Cat construtor" << std::endl;
}

Cat::Cat(const std::string &name) : Animal(name)
{
    // this->_type = name;
    std::cout << "Cat param construtor" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    // this->_type = obj._type;
    std::cout << "Cat copy construtor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destrutor" << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "Cat operator= " << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}