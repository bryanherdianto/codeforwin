#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < 3 + 2 * n; i++)
    {
        for (j = 0; j < 2 + n; j++)
        {
            if (i % (1 + n) == 0 && j % (2 + n - 1) != 0)
            {
                cout << "*";
            }
            else if (j % (2 + n - 1) == 0 && i % (1 + n) != 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}