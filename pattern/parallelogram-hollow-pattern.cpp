#include <iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1)
            {
                cout << "*";
            }
            else if (j % (c - 1) == 0)
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