#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    float salary;
    char favChar;
} emp;
// using typedef and adding emp after {}, you can
// create new structs with ease.

int main()
{
    struct employee harry;

    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 12000;

    cout << harry.eId << endl;
    cout << harry.salary << endl;
    cout << harry.favChar << endl;

    emp BigPoppa;

    BigPoppa.eId = 2;
    BigPoppa.salary = 20000;
    BigPoppa.favChar = 'h';

    cout << BigPoppa.eId << endl;
    cout << BigPoppa.salary << endl;
    cout << BigPoppa.favChar << endl;

    return 0;
}