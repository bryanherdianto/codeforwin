using namespace std;
#include <iostream>

int main(){
    int i, j, n;

    cout << "Enter sides: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n || i == j || j == (n - i + 1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        cout << endl;
    }
}