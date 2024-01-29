using namespace std;
#include <iostream>

int main(){
    int n;
    cout << "input n sides of square: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}