#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat& src);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& rhs);
        void makeSound() const;
};

#endif