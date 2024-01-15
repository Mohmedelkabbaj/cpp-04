#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

    // const WrongAnimal* met = new WrongAnimal();
    // const WrongAnimal* jj = new WrongCat();

    // std::cout << jj->getType() << " " << std::endl;
    // jj->makeSound();
    // met->makeSound();

    // delete met;
    // delete jj;
    // std::cout << "------------------" << std::endl;
    return 0;
}