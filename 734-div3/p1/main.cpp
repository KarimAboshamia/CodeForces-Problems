#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    string arr[t];
    for(int i = 0; i < t;i++)
    {
        string temp;
        cin>>temp;
        arr[i] = temp;
    }
    set<char>arrRes;

    for(int i = 0; i < t;i++)
    {
        string temp = arr[i];
        for(int j = 0; j < temp.size();j++)
        {
            arrRes.insert(temp[j]);
        }
        if(temp.size() == 1)
        {
            cout<<0<<endl;
        }
        else
        {
            int be = temp.size() / 2;
            int k = arrRes.size() - be;
            int r=  abs(k);
            cout<<arrRes.size()- r<<endl;
        }
        arrRes.clear();
    }
    return 0;
}
