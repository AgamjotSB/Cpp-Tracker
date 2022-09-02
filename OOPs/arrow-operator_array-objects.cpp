#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void getData()
    {
        cout << "Real is : " << real << endl;
        cout << "Imaginary is : " << imaginary << endl;
    };
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    };
};

int main()
{
    // Complex c1;
    // Complex* ptr = &c1;

    Complex *ptr = new Complex; //new returns pointer

    // (*ptr).setData(1,54); is exactly same as
    ptr ->setData(1,54); // do not use * (dereference opereator with arrow)

    // (*ptr).getData();
    // or
    // ptr ->getData();

    // ptr1 ->setData(2,4);
    // ptr1 ->getData();
    

    //Array of Objects

    Complex *ptr1 = new Complex[4];
    for (int i = 0; i < 4; i++){
        (ptr1 +i)->setData(i, (i+1)*10);
        (ptr1 +i)->getData();
    }

}