using namespace std;
#include <iostream>

int main(){
    int n;
    cout << "input n sides of the hollow square: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1){
                cout << "*";
            }
            else if(j % (n - 1) == 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}