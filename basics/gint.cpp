#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2){
        if (n1 > n3){
            cout << n1 << " is greatest" <<endl;
        } else {
            cout << n3 << " is greatest" << endl;
        }
    } else {
        if (n2 > n3){
            cout << n2 << " is greatest" << endl;
        } else {
            cout << n3 << " is greatest" << endl;
        }
    }
}