#include <iostream>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    if (n1%2 == 0){
        cout << n1 << " is even"<< endl;
    } else {
        cout << n1 << " is odd"<< endl;
    }
    return 0;
}