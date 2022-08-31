#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printarray(int array[],int size1){
    for (int i = 0; i < size1; i++){
        cout<< array[i] << " ";
    }
    cout << endl;
}
int main(){
    int temp, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array1[size];
    cout << endl;
    for (int i = 0; i < size; i++){
        //while (true){
            cout << "Enter array at index " << i << ":";
            cin >> temp;
            cout << endl;
            array1[i] = temp;
        //}
    };
    cout << "Array is: ";
    printarray(array1, size);
}