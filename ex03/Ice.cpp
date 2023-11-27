#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // std::cout << "Ice c_tor" << std::endl;
}

Ice::Ice(const Ice &obj) :  AMateria(obj)
{
    // this->_materiaType = obj._materiaType; // esim ?
    // std::cout << "Ice copy c_tor" << std::endl;
}

Ice::~Ice()
{
    
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    // std::cout << "Ice destructor" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
    // std::cout << "Ice operator=" << std::endl;
    if (this != &obj)
        this->_materiaType = obj._materiaType;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria* tmp = new Ice();
    // std::cout << "in ice " << tmp << " ndd\n";
    return (tmp);
    // this->_ice = new Ice();
    // return(this->_ice);
    // return (new Ice());
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " <<  target.getName() << " * "  /* << target.getName() */ << std::endl;
}