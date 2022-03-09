#include <iostream>
#include <map>
using namespace std;
int main() {
    map<char, int> map1;
    map1.insert(make_pair('A', 0));
    map1.insert(make_pair('B', 0));
    map1.insert(make_pair('C', 0));
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin>>s;
        if(s[1] == '>')
        {
            map1[s[0]]++;
        }
        else
        {
            map1[s[2]]++;
        }
    }
    int k = 0;
    string result = "";
    map<char, int>::iterator it = map1.begin();

    while(it != map1.end())
    {
        if(it->second == k)
        {
            result += it->first;
            k++;
            it = map1.begin();
        }
        else
        {
            it++;
        }
    }
    if(k == 3)
    {
        cout<<result<<endl;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
    return 0;
}
