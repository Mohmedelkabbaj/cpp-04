#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& src);
        ~Cat();
        Cat& operator=(const Cat& rhs);
        void makeSound() const;
};