#include <iostream>    
#include <string>    
#include <vector>    
		
using namespace std;

template <typename T>

T do_it(T a, T b)
{
	return (a + b);
}
int main()
{
	// string a = "Omar ";
	// string b = "Omar";
	// int a_ = 789;
	// int b_ = 789;

	vector<int> ua(10);

	// for (size_t i = 0; i < 17; i++)
	// {
		ua.push_back(4);
	// }

	cout << "Size :" << ua.size() << " Capacity : " << ua.capacity() << endl;

}