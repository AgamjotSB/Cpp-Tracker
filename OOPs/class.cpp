#include <iostream>
#include <list>
using namespace std;

class Youtube
{
public:
    string Name;
    string Ownername;
    int SubCount;
    list<string> Published_Videos;
};

int main()
{
    Youtube channel;
    channel.Name = "Codebeauty";
    channel.Ownername = "Saldina";
    channel.SubCount = 191;
    channel.Published_Videos = {"C++ oops", "HTML", "CSS","Python"};

    cout << channel.Name << endl;
    cout << channel.Ownername << endl;
    cout << channel.SubCount << endl;
    for(string videoname: channel.Published_Videos){
        cout << videoname << " ";
    };
    cout << endl;
}