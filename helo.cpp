#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> input (a);

    for (int i = 0; i < a; i++)
    {
        cin >> input[i];
    }
    
    sort(input.begin(), input.end());

    int rslt = 0;
    int rslt1 = 0;
    int i = a;
    int nbE = 0;
    int nbO = 0;
    while (--i >= 0)
    {
        if (input[i] % 2 == 0 && nbE < 2)
        {
            rslt += input[i];
            nbE++;
        }
        else if (input[i] % 2 && nbO < 2)
        {
            rslt1 += input[i];
            nbO++;
        }

    }
    if (rslt > rslt1 && nbE == 2)
        cout << rslt << endl;
    else if (rslt < rslt1 && nbO == 2)
        cout << rslt << endl;
    else
        cout << "-1\n";
}