#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 2 * n - (2 * i + 1); j < 2 * n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}