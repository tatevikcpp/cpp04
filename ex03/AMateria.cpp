#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() /* : _materiaType("ice") */
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    // _materiaType = this->getType();
    // std::cout << "AMateria c_tor " << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->_materiaType = obj._materiaType;
    // std::cout << "AMateria copy_tor " << std::endl;
}

AMateria::~AMateria()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // std::cout << "AMateria dest_tor " << std::endl;
}

AMateria& AMateria::operator=(const AMateria &obj)
{
    // std::cout << "AMateria operator = " << std::endl;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &obj)
        this->_materiaType = obj._materiaType;
    return (*this);
}

AMateria::AMateria(std::string const & typeName)
{
    this->_materiaType = typeName;
    // std::cout << "AMateria param c_tor " << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_materiaType);
} //Returns the materia type

void AMateria::use(ICharacter& target)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // if (target->_name.compare("ice"))
        // std::cout << "* shoots an ice bolt at <name> *"  << target->getName() << std::endl;
    // if (target->_name.compare("cure"))
        // std::cout << "* heals" << target->getName() << "’s wounds *" << std::endl;
    std::cout << "lalalala " << target.getName() << std::endl;
}
