#include <iostream>
using namespace std;

int main()
{
    int array[] = {41, 32, 100, 81, 16}, check;
    cout << "Enter element: ";
    cin >> check;
    for (int i = 0; i < 5; i++){
        if (check == array[i]){
            cout << "found at index: " << i << endl;
        }
    }
}