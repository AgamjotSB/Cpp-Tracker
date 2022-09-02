#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    void print() { cout << level << endl; }

    // getter (returns class attributes)

    int getHealth() { return health; }

    char getLevel() { return level; }

    // setter (gives values)

    void setHealth(int h) { health = h; }

    void setLevel(char l) { level = l; }
};

int main()
{
    
}