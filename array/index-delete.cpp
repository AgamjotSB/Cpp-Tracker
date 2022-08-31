#include <iostream>
#include <conio.h>
using namespace std;
void printarray(int array[], int size1)
{
    for (int i = 0; i < size1; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array1[] = {0, 1, 2, 3, 4, 5, 6};
    int index;
    printarray(array1, 7);
    cout << "Enter index to delete " << endl;
    cin >> index;
    for (int i = index; i < size(array1); i++)
    {
        array1[i] = array1[i+1];
    }
    printarray(array1, 6);
}