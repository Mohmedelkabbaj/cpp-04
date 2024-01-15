#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        ~WrongAnimal();
        std::string getType() const;
        void setType(std::string type);
        void makeSound() const;
};

#endif //WRONGANIMAL_HPP