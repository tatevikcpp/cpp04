#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &obj);
        ~Ice();
        Ice& operator=(const Ice &obj);
        // AMateria* clone() const;
        AMateria* clone() const;
        void use(ICharacter& target);
    private:
        // AMateria* _ice;
        // std::string _ice;
};