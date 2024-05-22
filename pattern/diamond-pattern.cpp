#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, col = n - 1;
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << " ";
        }
        for (j = 2 * n - (2 * col + 1); j > 0; j--)
        {
            cout << "*";
        }
        if (i < n - 1)
        {
            col--;
        }
        else
        {
            col++;
        }
        cout << endl;
    }
    return 0;
}