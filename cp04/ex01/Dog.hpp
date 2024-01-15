#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& src);
        ~Dog();
        Dog& operator=(const Dog& rhs);
        void makeSound() const;
};