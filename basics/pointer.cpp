#include <iostream>
using namespace std;

int main()
{
    int var, *ptr, **ptr1;
    var = 1000;
    ptr = &var;
    ptr1 = &ptr;
    cout << "var " << var << endl;
    cout << "ptr " << ptr << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "ptr1 " << ptr1 << endl;
    cout << "*ptr1 " << *ptr1 << endl;
    cout << "**ptr1 " << **ptr1 << endl;
}
