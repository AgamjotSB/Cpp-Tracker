#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        // A& setData(int a){
        this->a = a;
        //   return *this;
    }

    void getData()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{

    // this is a keyword which is a pointer which points to
    //  the object which is being created / invokes the member function.

    // it can be used to return the object being created.

    A a;
    a.setData(4);
    a.getData();
}