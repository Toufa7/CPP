#include <iostream>

using namespace std;

int main ()
{
	int	l;
	int	r;

	std::string		input;

    cin >> l;
    cin >> r;
	cin >> input;
	int idx = 0;
	while ((idx = input.find(input[l], idx)) != -1)
	{
		input.replace(idx, needle.length(),replace);
		idx += replace.length();
	}
}