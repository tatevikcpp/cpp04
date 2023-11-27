#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice()); // erku hat a kanchvum ctor ?
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
// //    std::cout << "in main " << tmp << " ndd\n";
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     // std::cout << "in heto " << tmp << " ndd\n";
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

int main()
{
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    // ICharacter* you = new Character("you");

    // ICharacter* a = new Character();

    // *you = *me;
    // std::cout << you->getName() << std::endl;
    // std::cout << me->getName() << std::endl;




    Character *obj = new Character("ok");
    Character *obj_1 = new Character("ok_1");

    // Character obj("ok");
    // Character obj_1 ("ok_1");
    *obj = *obj_1;
    delete obj;

    obj_1->use(3, *me);

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;


    // AMateria *obj =  new Ice();
    // AMateria *obj_1 = new Ice();
    // *obj = *obj_1;



    system("leaks ./animal");
    return 0;
}