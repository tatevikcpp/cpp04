#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // std::cout << "Cure c_tor" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
    // this->_materiaType = obj._materiaType;
    // std::cout << "Cure copy c_tor" << std::endl;
}

Cure::~Cure()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // std::cout << "Cure destructor" << std::endl;
}

Cure& Cure::operator=(const Cure &obj)
{
    // std::cout << "Cure operator=" << std::endl;
    if (this != &obj)
        this->_materiaType = obj._materiaType;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria* tmp = new Cure();
    // std::cout << "in curee " << tmp << " ndd\n";
    return (tmp);
    // this->_cure = new Cure();
    // return (this->_cure);
    // return (new Cure());
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}