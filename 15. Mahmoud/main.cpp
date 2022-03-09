#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin>>a;
    cin>>b;
    if(a == b)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<max(a.length(), b.length());
    }
    return 0;
}
