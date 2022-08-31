#include <iostream>
using namespace std;

void printarray(int array[])
{
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

     cout << endl << size << endl;
}
int main()
{
    int array1[] = {0, 1, 2, 3, 4, 5, 6};
    int test_size = sizeof(array1) / sizeof(array1[0]);
    printarray(array1);
    cout << test_size << endl;

}