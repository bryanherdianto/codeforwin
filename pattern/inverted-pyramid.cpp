#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = n - i; j < n; j++)
        {
            cout << " ";
        }
        for (j = 2 * n - (2 * i + 1); j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}