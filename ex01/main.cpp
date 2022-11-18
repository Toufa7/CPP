#include "Phonebook.hpp"
#include <iomanip>
// 
class Contact
{
    private:
        std::string  FirstName;
        std::string  LastName;
        std::string  Nickname;
        std::string  PhoneNumber;
        std::string  DarkestSecret;
    public:
        std::string *GetFirst_name()
        {
            return (&this->FirstName);
        }
        std::string *GetLastName()
        {
            return (&this->LastName);
        }
        std::string *GetNickname()
        {
            return (&this->Nickname);
        }
        std::string *GetPhoneNumber()
        {
            return (&this->PhoneNumber);
        }
        std::string *GetDarkestSecret()
        {
            return (&this->DarkestSecret);
        }
};

class PhoneBook
{
    private:
        Contact nokia[8];
        int     idx;
        int     current_contact;
    public:
        PhoneBook()
        {
            idx = 0;
            current_contact = 0;
        };
        void    AddContact();
        void    SearchContact();
        void    Exiting();
        void    ContactInformations();
};

int skip_whitespaces(std::string    str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!std::isspace(str[i]))
            return (1);
    }
    return (0);
}

void    PhoneBook::ContactInformations()
{
    std::cout << " ------------------------------------------- \n";
    std::cout << "|       Idx|" <<  " FirstName|" << "  LastName|" << "  Nickname|\n";
    std::cout << "+----------+----------+----------+----------+\n";
    for (int i = 0; i < this->idx ; i++)
    {
        std::cout <<    "|" << std::setw(10)    <<  i;
        if (this->nokia[i].GetFirst_name()->length() > 10)
        {
            std::cout <<    "|" << std::setw(10)    <<  this->nokia[i].GetFirst_name()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetFirst_name();
        if (this->nokia[i].GetLastName()->length() > 10)
        {
            std::cout <<    "|" << std::setw(10)    <<  this->nokia[i].GetLastName()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetLastName();
        if (this->nokia[i].GetNickname()->length() > 10)
        {
            std::cout <<    "|" << std::setw(10)    <<  this->nokia[i].GetNickname()->substr(0, 9);
            std::cout << ".";
        }
        else
            std::cout <<    "|" << std::setw(10)    <<  *this->nokia[i].GetNickname();
        std::cout << "|\n+-------------------------------------------+\n";
    }
}

void    PhoneBook::AddContact()
{
    std::cout << "1) First Name : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetFirst_name());
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetFirst_name()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetFirst_name());
    std::cout << "2) Last Name : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetLastName());
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetLastName()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetLastName());
    std::cout << "3) Nickname : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetNickname()); 
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetNickname()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetNickname());
    std::cout << "4) Phone Number : ";
    std::getline(std::cin, *this->nokia[this->current_contact].GetPhoneNumber()); 
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetPhoneNumber()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetPhoneNumber());
    std::cout << "5) Darkest Secret : ";
    std::getline(std::cin,  *this->nokia[this->current_contact].GetDarkestSecret());
    while (!skip_whitespaces(*this->nokia[this->current_contact].GetDarkestSecret()))
        std::getline(std::cin, *this->nokia[this->current_contact].GetDarkestSecret());
    current_contact = (current_contact + 1) % 8;
    std::cout << "      Contact has been successfully created \n";
    if (idx < 8)
        idx++;
}

void    PhoneBook::SearchContact()
{
    int choice;

    std::cout << "Who's you're looking for : "  << std::endl;
    std::cout << "Currenlty You Have : "        <<  this->idx <<std::endl;

    std::cin >> choice;
    if (this->idx == 0)
        std::cout << "Actually no contact here ..."  << std::endl;
    else if (!(choice >= this->idx))
    {
        ContactInformations();
    }
    else
        std::cout << "Out of the boundry !"  << std::endl;
}

int main()
{
    PhoneBook   orange;
    std::string choice;
    
    std::cout << "              Welcome to your awesome phonebook book\n";
    std::cout << "Usage\n";
    std::cout << "      ADD\n";
    std::cout << "      SEARCH\n";
    std::cout << "      EXIT\n";
    while (1)
    {
        std::getline(std::cin, choice);
        if (choice == "ADD")
            orange.AddContact();
        else if (choice == "SEARCH")
            orange.SearchContact();
        else if (choice == "EXIT")
            break ;
        std::cout << choice << ": Unknown Command\n";
        std::cout << "      ADD\n";
        std::cout << "      SEARCH\n";
        std::cout << "      Exit\n";
    }
    return (0);
}