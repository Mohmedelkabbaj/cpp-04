#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // i->makeSound();
    // j->makeSound();
    delete j;//should not create a leak
    delete i;
    
    return 0;
}