#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubCount;
    list<string> PublishedVideos;

    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubCount = 0;
    }
    void getinfo(){
        cout << "Channel Name : " << Name<< endl;
        cout << "Owner Name : "<< OwnerName << endl;
        cout << "Subscriber Count : "<< SubCount << endl;
        cout << "Published Videos : ";
        for (string videoname : PublishedVideos){
            cout << videoname << " ,";
        }
        cout << endl << endl;
    }
};

int main()
{
    YoutubeChannel ytchannel("CodeBeauty", "Saldina");
    ytchannel.PublishedVideos.push_back("C++ for beginners");
    ytchannel.PublishedVideos.push_back("HTML & CSS");
    ytchannel.PublishedVideos.push_back("Python");
    YoutubeChannel ytchannel2("moistcritikal", "penguinz0");

    // cout << ytchannel.Name << endl;
    // cout << ytchannel.OwnerName << endl;
    // cout << ytchannel.SubCount << endl;
    // for (string videoname : ytchannel.PublishedVideos)
    // {
    //     cout << videoname << " ";
    // };
    ytchannel.getinfo();
    ytchannel2.getinfo();
}