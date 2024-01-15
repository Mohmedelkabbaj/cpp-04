#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
        
    public:
        AAnimal();
        AAnimal(const AAnimal& src);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& rhs);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const = 0;
};

#endif