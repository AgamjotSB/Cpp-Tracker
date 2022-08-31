#include <iostream>
using namespace std;

int main()
{
    int array1[] = {14, 81, 100, 4, 3, 32};
    int temp = array1[0];
    for (int i = 0; i < sizeof(array1) / 4; i++)
    {
        if (temp > array1[i])
        {
            temp = array1[i];
        }
    }
    cout << temp << " is minimum" << endl;
    for (int i = 0; i < size(array1); i++)
    {
        if (temp < array1[i])
        {
            temp = array1[i];
        }
    }
    cout << temp << " is maximum" << endl;
}