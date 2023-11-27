#include "Dog.hpp"

Dog::Dog() : Animal("Dog") , brain()
{
    // this->_type = "Dog";
    // Brain a();
    // Brain a;
    std::cout << "Dog construtor" << std::endl;
    // this->brain = new Brain;
}

Dog::Dog(const std::string &name) : Animal(name), brain()
{
    // this->_type = name;
    // this->brain = new Brain();
    std::cout << "Dog param construtor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj), brain(obj.brain)
{
    // this->_type = obj._type;
    std::cout << "Dog copy construtor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destrutor" << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog operator= " << std::endl;
    if (this != &obj)
    {
        (this->brain) = (obj.brain);
        // *this->brain = *obj.brain;
        this->_type = obj._type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "miau" << std::endl;
}