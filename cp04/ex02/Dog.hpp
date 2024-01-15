#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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