#include <iostream>
using namespace std;

double sum(float num1, float num2) { return num1 + num2; };
double subtract(float num1, float num2) { return num1 - num2; };
double multiply(float num1, float num2) { return num1 * num2; };
double divide(float num1, float num2) { return num1 / num2; };

int main(){
    int num1, num2;
    char symbol;
    while (true)
    {
        cin >> num1 >> symbol >>num2;
        if (symbol == '+'){ cout << sum(num1,num2) << endl;}
        else if (symbol == '-'){cout<< subtract(num1, num2) << endl;}
        else if (symbol == '*' || symbol == 'x'){cout<< multiply(num1, num2) << endl;}
        else if (symbol == '/' || num2 != 0){cout<< divide(num1, num2) << endl;};
    }
}
