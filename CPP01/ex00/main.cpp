#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
    Zombie(std::string name)
    {
        this->name = name;
        std::cout << "Constructor" << std::endl;
    }
    ~Zombie()
    {
        std::cout << "Destructor" << std::endl;
    }
};

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name)
{
    Zombie *hello;
    
    hello = new Zombie(name);
    return (hello);
}

void randomChump( std::string name )
{
    Zombie hi(name);
    hi.announce();
}

int main()
{
    // Zombie  *twd[4];
    randomChump("Omar");

    // for (int i = 0; i < 4; i++)
    // {
    //     twd[i] = newZombie("Omar Toufah");
    // }
    // for (int i = 0; i < 4 ; i++)
    // {
    //     twd[i]->announce();
    // }
    // for (int i = 0; i < 4 ; i++)
    // {
    //     delete twd [i];
    // }
    return (0);
}