#include <iostream>
using namespace std;

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main(){
    int temp, index, size, element;
    cin >> size;
    int array1[size];
    for(int i = 0; i < size; i++){
        cout << "Enter array at index " << i << ": ";
        cin >> temp;
        cout << endl;
        array1[i] = temp;
    }
    int array2[sizeof(array1)/sizeof(int)+1];
    cout << endl << "Array before inserting: " << endl;
    printarray(array1, sizeof(array1)/4);
    cout << endl << "Enter the index: ";
    cin >> index;
    cout << "Enter the element: ";
    cin >> element;
    for (int i  = sizeof(array1)/4; i >= index; i-- ){
        array2[i + 1] = array1[i];
    }
    for(int i = 0; i < index; i++ ){
        array2[i] = array1[i];
    }
    array2[index] = element;
    cout << endl << "Array after inserting: " << endl;
    printarray(array2, sizeof(array2)/4);
}