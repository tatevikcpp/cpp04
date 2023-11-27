#pragma once
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(const AMateria &obj);
        virtual ~AMateria();
        AMateria& operator=(const AMateria &obj);
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    protected:
        std::string _materiaType;
};