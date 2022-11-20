#include <iostream>
#include <string>
#include <fstream>

// int main(int ac, char *av[])
// {
// 	std::ifstream	myfile;
// 	std::string		myline;

// 	if (ac)
// 	{
// 		myfile.open("./test.txt");
// 		if (myfile.is_open())
// 		{
// 			while (std::getline(myfile, myline))
// 			{
// 				std::cout << myline << '\n';
// 				// string.replace(string.find("%s"), string("%s").size(), "Something");
// 				std::string hello = myline;
// 				hello.replace(1, 1, "B");
// 			}
// 		}
// 		else
// 			std::cerr << "Cannot open: " << av[1] << '\n';
// 	}
// 	else
// 		std::cout << "Provide your 3 arguments" << std::endl;
// }

static int	DidYouFoundIt(std::string haystack, std::string needle)
{
	int idx;

	idx = haystack.find(needle);
	std::cout << idx << std::endl;
	return (idx);
}

int main ()
{
    std::string str1 ("Omar Omar Omar"), str2 ("Omar"), str3 ("Safe");
    std::string ho = str1;
	ho.replace(DidYouFoundIt(str1, str2), str3.length(),str3);
    std::cout << ho << std::endl;
    return 0;
}