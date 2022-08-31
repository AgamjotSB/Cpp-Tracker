#include <iostream>
using namespace std;

int main(){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int first = 0, mid, last, num;
    last = size(array) - 1;
    cout << "Enter Number: ";
    cin >> num;
    do{
        mid = (first + last)/2;
        if (array[mid]== num){
            cout << "Found at index " << mid << endl;
            break;
        }else if (array[mid] < num){
            first = mid+1;
        }else {
            last = mid - 1;
        }
    }while(first <=last);
    if (first > last) cout << "element not found" << endl;
}