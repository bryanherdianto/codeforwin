#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1 - i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}