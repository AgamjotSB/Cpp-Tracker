#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int temp, index, size, array1[] = {0, 1, 2, 3, 4, 5};
    int array2[sizeof(array1)/sizeof(int)];
    int element;
    // cout << "Index to place element: ";
    // cin >> index;
    // cout << endl;
    cout << sizeof(array1)/sizeof(int) << endl;
    cout << sizeof(array2)/sizeof(int) << endl;
    // print array before
    size = sizeof(array1)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << " ";
    }
    size++;

    // create space
    for (int i = 0; i < size; i++)
    {
        array2[i + 1] = array1 [i];
    }
    cout << endl << "enter new element: ";
    cin >> element;
    array2[0] = element;
    cout << endl;

    // print array after
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << " ";
    }
    // cout << endl << sizeof(array1)/sizeof(int);
}