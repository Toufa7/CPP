#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char *av[])
{
	std::ifstream	in;
	std::ofstream	out;

	std::string		input;
	std::string		needle;
	std::string		replace;
	std::string		filename;

	filename = av[1];
	needle = av[2];
	replace = av[3];
	if (ac == 4)
	{
		int idx;
		in.open(filename);
		if (in.is_open())
		{
			while (std::getline(in, input))
			{
				idx = 0;
				while ((idx = input.find(needle, idx)) != -1)
				{
					input.replace(idx, needle.length(),replace);
					// out.open(filename + ".replace", std::ios::out);
					idx += replace.length();
				}
			}
		}
		else
		{
			std::cerr << "Error: " << filename << " could not be opened" << std::endl;
		}
	}
	else
		std::cerr << "Provide us with 3 Args : [filename] [needle] [replace]" << std::endl;
}