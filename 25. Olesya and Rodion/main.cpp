#include <iostream>

using namespace std;

int main()
{
    int n;
    string t;
    cin>>n;
    cin>>t;
    string res = "";

    for(int i = 0; i < n;i++)
    {
        if(t == "10")
        {
            res+= "1";
        }
        else
        {
            res += t;
        }

    }

    if(t.size() > 1&& n == 1)
    {
        cout<<-1;
    }
    else if(t == "10")
    {
        int siz = res.size();
        res[siz-1] = '0';
        cout<<res;
    }
    else
    {
        cout<<res;
    }



    return 0;
}
