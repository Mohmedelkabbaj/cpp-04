#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    setType("Cat");
    std::cout << this->type << " Default Constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &src)
{
    std::cout << this->type << " Copy constructor called" << std::endl;
    this->brain = NULL;
    *this = src;
}

Cat &  Cat::operator=(Cat const &rhs)
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

void Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type << " Destructor called" << std::endl;
    delete this->brain;
}