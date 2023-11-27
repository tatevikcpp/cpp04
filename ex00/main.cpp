#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
//     Animal a;
//     a.makeSound();

//     Dog c;
//     c.makeSound();

//     // WrongAnimal w;
//     // w.makeSound();


//     // Dog d;
//     // d.makeSound();
    
//     // WrongCat wc;
//     // wc.makeSound();

//     return (0);
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "\n\nwrong\n\n";
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongi = new WrongCat();
    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound(); //will output the animal sound!
    wrongmeta->makeSound();
    // ...

    return 0;
}