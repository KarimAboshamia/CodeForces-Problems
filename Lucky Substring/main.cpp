#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int four = 0;
    int seven = 0;
    for(int i = 0 ; i< s.size();i++)
    {
        if(s[i] == '7')
        {
            seven++;
        }
        else if(s[i] == '4')
        {
            four++;
        }
    }
    if(seven == 0 && four == 0)
    {
        cout<<-1;
    }
    else if(seven>four)
    {
        cout<<'7'<<endl;
    }
    else
    {
        cout<<'4'<<endl;
    }
    return 0;
}
