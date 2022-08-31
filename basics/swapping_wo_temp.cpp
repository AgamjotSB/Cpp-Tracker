#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 10;
    cout << a << " " << b << endl;
    
    a = a + b; //30
    b = a - b; //20 (value of a now in b)
    a = a - b; //10 (old a subtracted from a + b)
    cout << a << " " << b << endl;
    system("pause>0");
}