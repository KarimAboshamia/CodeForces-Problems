#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    set<char> s1;
    int k;
    cin>>k;
    string word;
    cin>>word;
    for(int i = 0; i < word.length();i++)
    {
        char c = tolower(word[i]);
        s1.insert(c);
    }
    if(s1.size() == 26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
