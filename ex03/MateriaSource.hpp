#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

// class IMateriaSource;

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource &obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria *_materia[4];
        int _idx;
};
