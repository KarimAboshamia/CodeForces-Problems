#include <iostream>

using namespace std;

int main()
{
    string n;
    cin>>n;
    string b;
    cin>>b;
    int index = 0;
    long long t1 = 0;
    long long t2 = 0;
    if(b.size()!= n.size())
    {
        cout<<"WRONG_ANSWER"<<endl;
        return 0;
    }
    for(int i = 0; i < b.size();i++)
    {
        t1 += n[i];
        t2 += b[i];
    }
    for(int i = 1; i < b.size() ; i++)
    {
        if(b[index] <= b[i] && b[i] != 0)
        {
            index = i;
        }
        if(b[i] == 0 && index > 0 )
        {
            cout<<"WRONG_ANSWER"<<endl;
            return 0;
        }
    }
    if(b[0] == '0')
    {
        cout<<"WRONG_ANSWER"<<endl;
    }
    else if(t1 == t2 && index == b.size()-1)
    {
        cout<<"OK";
    }
    else
    {
        cout<<"WRONG_ANSWER"<<endl;
    }
    return 0;
}
