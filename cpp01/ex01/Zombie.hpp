#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class zombie {
    private:
        std::string name;
    public:
        zombie(){};
        zombie(std::string n){ name = n; };
        ~zombie(){};
        void announce(void);
        void setName(std::string n){ name = n; };
};
    zombie *zombieHorde(int n, std::string name);


#endif