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
        for (j = 0; j < 2 * i + 1; j++)
        {
            if(i==0||i==n-1){
                cout << "*";
            }
            else if(j % (2*i)==0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}