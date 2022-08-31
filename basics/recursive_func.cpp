#include <iostream>
using namespace std;

int recursive_sum(int a, int b)
{
    if (a == b)
        return a;
    return a + recursive_sum(a + 1, b);
}
int factorial(int a){
    if (a==1)
        return a;
    return a * factorial(a-1);
}
int main()
{
    cout << factorial(5);


}