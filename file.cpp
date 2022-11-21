#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a;
    cin >> b;

    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            cout << "No";
        }
    }
    cout << "Yes";
}