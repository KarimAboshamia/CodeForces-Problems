#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(long long i = 0; i < s.size()-1;)
    {
        if(s[i] =='y' &&s[i+1]=='x')
        {
            swap(s[i],s[i+1]);
            i = 0;
        }
        else
        {
            i++;
        }
    }
    for(long long i = 0; i < s.size()-1;)
    {
        if(s[i] == 'x' && s[i+1]=='y')
        {
            s.erase(i,2);
            i = 0;
        }
        else
        {
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
