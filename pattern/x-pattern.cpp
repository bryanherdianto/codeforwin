#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (j == i || j == 2 * n - i - 2)
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