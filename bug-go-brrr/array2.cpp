#include <iostream>
using namespace std;

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array1[] = {0, 1, 2, 3, 4, 5, 6};
    int size1 = sizeof(array1) / sizeof(int);
    printarray(array1, size1);
}