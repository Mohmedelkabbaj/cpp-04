#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "default";
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::Brain(std::string type)
{
    std::cout << "Brain parameter constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = type;
}

Brain & Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}