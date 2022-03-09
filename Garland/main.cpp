#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cin>>s;
    string b;
    cin>>b;
    map<char,int> cheats;
    map<char,int> garland;
    for(int i = 0; i < s.size();i++)
    {
        if(cheats.find(s[i]) ==  cheats.end())
        {
            cheats.insert(make_pair(s[i],1));
        }
        else
        {
            cheats[s[i]]++;
        }
    }
    for(int i = 0; i < b.size();i++)
    {
        if(garland.find(b[i]) ==  garland.end())
        {
            garland.insert(make_pair(b[i],1));
        }
        else
        {
            garland[b[i]]++;
        }
    }
    int maximum = 0;
    for(int i = 0; i< b.size();i++)
    {
        int garlands = garland[b[i]];
        int cheatsFound = cheats[b[i]];
        if(cheatsFound >= garlands)
        {
            maximum += garlands;
            cheats.erase(b[i]);
            garland.erase(b[i]);
        }
        else if(cheatsFound < garlands && cheatsFound!= 0)
        {
            maximum += cheatsFound;
            cheats.erase(b[i]);
            garland.erase(b[i]);
        }
    }
    if(garland.size()>0)
    {cout<<-1<<endl;}
    else
    {
        cout<<maximum<<endl;
    }

    return 0;
}
