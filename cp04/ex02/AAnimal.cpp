#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

// copy constructor
AAnimal::AAnimal(const AAnimal& src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

// assignment operator overload
AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}