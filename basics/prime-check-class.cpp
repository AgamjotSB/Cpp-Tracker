#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Isprime
{
public:
    int primecheck()
    {
        int number, temp;
        cout << "Enter number to check: ";
        cin >> number;
        cout << endl;
        temp = number / 2;
        for (int i = 0; i <= number; i++)
        {
            if (number % i == 0)
            {
                cout << number << " is not prime" << endl;
                break;
            }
        }
    }
};
int main()
{
    Isprime o1;
    o1.primecheck();
}