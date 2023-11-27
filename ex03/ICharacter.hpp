#pragma once

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter //base for Character
{
    public:
        ICharacter& operator=(const ICharacter& obj)
        {
            (void)obj;
            std::cout <<"lalala\n";
            return (*this);
        }
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};