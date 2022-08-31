#include <iostream>
using namespace std;

void printarray(int array[],int size1){
    for (int i = 0; i < size1; i++){
        cout<< array[i] << " ";
    }
}
void printarray1(int array[]){
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++){
        cout<< array[i] << " ";
    }
    
    cout << endl << size;
 }

int main(){
    int size = 7;
    int array1[] = {0,1, 2, 3, 4, 5, 6};
    int size1 = sizeof(array1)/sizeof(int);
    cout<< "Size of array is : " << size1  << endl;
    printarray(array1,size1);
    cout << endl;
    printarray1(array1);
    // size++ ;
    // cout << endl;
    // array1[7] = 8;
    //  for (int i = 0; i < size; i++){
    //     cout<< array1[i] << " ";
    // }
    // size++;
    // int temp;
    // for(int i = size; i > 0; i -- ){
    //     array1[i - 1] = temp;
    //     array1[i - 1] = array1[i];
    //     array1[i] = temp;
    // }

}