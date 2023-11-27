#pragma once

#include "Character.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(const Character &obj);
        Character(const std::string &obj);
        ~Character();
        Character& operator=(const Character &obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string _name;
        AMateria* _materia[4];
        // AMateria slot[4];
        // int idx;
};