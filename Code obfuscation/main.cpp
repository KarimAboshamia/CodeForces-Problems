#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> v1;
    v1.push_back(s[0]);
    bool flag = false;
    for(int i =0 ; i < s.size();i++)
    {
        for(int j = 0; j < v1.size();j++)
        {
            if(v1[j] == s[i])
            {
                flag = true;
            }
        }
        if(flag == false)
        {
            v1.push_back(s[i]);
        }
        else
        {
            flag = false;
        }
    }
    if(v1.size() == 1 && v1[0]!= 'a')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i < v1.size()-1;i++)
    {
        if(char(v1[i]+1) != v1[i+1] || v1[0] != 'a')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
