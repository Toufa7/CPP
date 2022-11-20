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
    Zombie()
    {

    };
    ~Zombie()
    {
        std::cout << "Destructor" << std::endl;
    }
};

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump( std::string name )
{
    Zombie hi(name);

    hi.announce();
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *hello;
    
    hello = new Zombie[N] ;
    for (int i = 0; i < N ; i++)
    {
        randomChump(name);
    }
    return (hello);
}


int main()
{
    Zombie  *twd;

    twd = zombieHorde(4, "Omar 8");
    // twd->announce();
    delete [] twd;
    return (0);
}
