#include <iostream>

using namespace std;

int main()
{
    string layout1;
    string layout2;
    cin>>layout1;
    cin>>layout2;
    string s;
    cin>>s;
    string res="";
    for(int i = 0 ; i< s.size();i++)
    {
        for(int j = 0 ;j < layout1.size();j++)
        {
            if(s[i] == layout1[j])
            {
                res+= layout2[j];
                break;
            }
            else if(s[i] == char(layout1[j]-32))
            {
                res+= char(layout2[j] - 32);
                break;
            }
            else if(s[i] >= 48 && s[i] <= 57)
            {
                res+= s[i];
                break;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
