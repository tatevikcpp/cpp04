#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    for (int i = 0; i < 4; ++i)
        this->_materia[i] = NULL;
    this->_idx = 0;
    // std::cout << "MateriaSource c_tor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for (int i = 0; i < 4; ++i)
    {
        if (obj._materia[i])
        {
            this->_materia[i] = obj._materia[i]->clone();
            // std::cout << "type " << this->_materia[i]->getType() << " ndd\n";
        }
        // std::cout << "zzzzz\n";
    }
    this->_idx = obj._idx;
    // std::cout << "MateriaSource copy c_tor" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        if (_materia[i])
            delete this->_materia[i];
    }
    // std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
        for (size_t i = 0; i < 4; i++)
        {
            delete  _materia[i];
            _materia[i] = NULL;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (obj._materia[i])
            {
                this->_materia[i] = obj._materia[i]->clone();
                // std::cout << "type " << this->_materia[i]->getType() << " ndd\n";
            }
        }
        this->_idx = obj._idx;
    }
    // std::cout << "MateriaSource operator= " << std::endl;
    return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type) // ~~der che 
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    for (int i = 0; i < 4; ++i)
    {
        // std::cout << this->_materia[i] << " createMateria\n";
        // std::cout << this->_materia[i]->getType() << " lalala\n";
        // std::cout << "type = "<< type << std::endl;

        if (this->_materia[i] && type == this->_materia[i]->getType())
        {
            // std::cout << "offff \n";
            return(_materia[i]->clone());
        }
    }
    return (NULL);
}

void MateriaSource::learnMateria(AMateria* obj)
{
    
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    for (int i = 0; i < 4; ++i)  //voc aveli qan 4
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = obj->clone();
            return ;
        }
    }
}