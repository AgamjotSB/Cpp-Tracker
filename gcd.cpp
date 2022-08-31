#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter Two Numbers != 0: ";
    cin >> a, b;
    while (true)
    {
        if (a > b)
        {
            temp = a % b;
            a = b;
            b = temp;
            if (b = 1){
                cout << endl << a << " is gcd" << endl;
                break;
            };
        }
        else if(b > a){
            temp = b % a;
            a = temp;
            b = a;
            if (a = 1){
                cout << endl << b << "," << a << " is gcd" << endl;
                break;
            }
        }
        else{
            cout << endl << a << " is gcd" << endl;
        }
    }
}