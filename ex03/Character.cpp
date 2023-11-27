#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("name")
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // std::cout << "Character c_tor" << std::endl;
    for (int i = 0; i < 4; ++i)
        this->_materia[i] = NULL;
}


Character::Character(const Character &obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_name = obj._name; // obj.getName();
    for (int i = 0; i < 4; ++i)
    {
        // this->_materia[i] = NULL;
        // this->_materia[i] = new AMateria(*(obj._materia[i])); // kam clone(), Cure type??
        if (obj._materia[i])
        {
            this->_materia[i] = obj._materia[i]->clone();
        }
    }

    // this->idx = 
    // std::cout << "Character copy c_tor" << std::endl;
}

Character::Character(const std::string &name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; ++i)
        this->_materia[i] = NULL;
    // std::cout << "Caracter param c_tor" << std::endl;
}

Character::~Character()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        delete this->_materia[i];
    }
    // std::cout << "Character destructor" << std::endl;
}

Character& Character::operator=(const Character &obj)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    if (this != &obj)
    {
        this->_name = obj._name; // getName() ?
        for (int i = 0; i < 4; ++i)
        {
            if (obj._materia[i])
            {
                this->_materia[i] = (obj._materia[i]->clone());
            }
        }
        // std::cout << "lalala\n";
            // *(this->_materia[i]) = *(obj._materia[i]); // esim ? deep copy ?
        // this->idx = 
    }
    return (*this);
}

void Character::equip(AMateria* m)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        if (this->_materia[i] == NULL)
        { 
            this->_materia[i] = m;
            // std::cout << "materia "  << m << std::endl ;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3) {
        // delete  this->_materia[idx]; // SUBJECT!!
        this->_materia[idx] = NULL;  // TODO nayel
    }
}

void Character::use(int idx, ICharacter& target)
{
    // (void)idx;
    // (void)target;
    // // std::cout << "lalala" << std::endl;
    // std::cout << "lalala "<< _materia[idx] << "alala\n";
    if((idx >= 0 && idx < 4) && _materia[idx] != NULL)
    {
        this->_materia[idx]->use(target);
    }
    else
    {
        std::cout << "Cannot use Materia of m_materia!" << std::endl;
        return;
    }
}

std::string const & Character::getName() const
{
    return (this->_name);
}