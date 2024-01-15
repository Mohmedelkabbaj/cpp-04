#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &src);
        Brain(std::string type);
        Brain & operator=(Brain const &rhs);
        ~Brain();
};

#endif
