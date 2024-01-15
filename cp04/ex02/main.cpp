#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    AAnimal* j = new Dog();
    AAnimal* i = new Cat();
    // i->makeSound();
    // j->makeSound();
    delete j;//should not create a leak
    delete i;
    

    // AAnimal* k = new AAnimal();
    // delete k;

    return 0;
}