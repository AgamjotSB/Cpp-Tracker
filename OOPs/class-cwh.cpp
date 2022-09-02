#include <iostream>
#include <string>
using namespace std;

// classes are used instead of structures in some cases because classes can
// hide data, and you can integrate functions inside classes

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomp(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
};

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
};

void binary::onescomp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){ s.at(i) = '1'; } else
        if (s.at(i) == '1'){ s.at(i) = '0'; }
    }
}

void binary ::display(void)
{
    cout << "Ones compliment is : " << s;
}

int main()
{
    // OOPs - Classes and objects
    binary b;
    b.read();
    b.chk_bin();
    b.onescomp();
    b.display();
}