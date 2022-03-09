#include <iostream>
#include <map>
using namespace std;
int main() {
    map<char, int> map1;
    string s;
    cin >> s;
    map1.insert(make_pair('?', 0));
    for (int i = 65; i <= 90; i++) {
        map1.insert(make_pair(char(i), 0));
    }
    if (s.size() < 26) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        auto itr = map1.find(s[i]);
        itr->second++;
    }
    map<char,int>::iterator it = map1.begin();
    //cout<<string::npos;
    it++;
    while(it!= map1.end())
    {
        if(it->second == 0 && s.find('?') != string::npos)
        {
            s[s.find('?')] = it->first;
        }
        else if(s.find('?') == string::npos)
        {
            cout<<-1<<endl;
            return 0;
        }
        it++;
    }
    while(s.find('?') != string::npos)
    {
        s[s.find('?')] = 'A';
    }
    cout<<s<<endl;

    return 0;
}
