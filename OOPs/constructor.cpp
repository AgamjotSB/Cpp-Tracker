#include <iostream>
#include <string>
using namespace std;

// comment testing hihihihi
class Human {
public:
    string name;
    int age;
    double weight;
    Human(string name, int age, double weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
    void eat() {
    cout << this-> name << " is eating" << endl;
}
};
int main()
{
    Human human1("Tom", 12, 25);
    Human human2("Rick", 65, 80);
    Human human3("Morty", 16, 55);
    human2.eat();
    cout << human2.name << endl;
    cout << human2.age << endl; 
    cout << human2.weight << endl; 
    system("pause>0");
}
