#include <iostream>


using namespace std;

// int and_operator(int a, int b)
// {
//     // Convert a & b to bin

//     std::bitset<8> a(8);
//     std::bitset<8> b(8);

//     uint32_t h = a.to_ulong();
//     // uint32_t a = a.to_ulong
// }


int main()
{
    int a = 789;
    int b =  123;


    cout << "A = " << a << " B = " << b << endl;

    a ^= b;
    b ^= a;
    a ^= b;
    cout << "A = " << a << " B = " << b << endl;
}