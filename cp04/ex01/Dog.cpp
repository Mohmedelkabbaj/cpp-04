#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    setType("Dog");
    std::cout << this->type << " Default Constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const &src)
{
    std::cout << this->type << " Copy constructor called" << std::endl;
    this->brain = NULL;
    *this = src;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << " Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        delete brain;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type << " Destructor called" << std::endl;
    delete this->brain;
}

