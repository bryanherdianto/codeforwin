#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, col = 1;
    for (i = 0; i < 2 * n; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "*";
        }
        if (i < n - 1)
        {
            col++;
        }
        else
        {
            col--;
        }
        cout << endl;
    }
    return 0;
}