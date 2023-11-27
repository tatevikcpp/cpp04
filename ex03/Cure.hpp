#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &obj);
        ~Cure();
        Cure& operator=(const Cure &obj);
        // AMateria* clone() const;
        AMateria* clone() const; 
        void use(ICharacter& target);
    private:
        // AMateria* _cure;
        // std::string _cure;
};