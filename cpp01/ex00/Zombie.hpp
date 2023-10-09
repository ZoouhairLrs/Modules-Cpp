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

        void randomChump(std::string name);
};
    zombie *newZombie(std::string name);


#endif