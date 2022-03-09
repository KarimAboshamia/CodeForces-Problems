#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<char>s1;
    for(int i = 0; i < n; i++)
    {
        char temp;
        cin>>temp;
        s1.insert(temp);
    }
    if(n > 26)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<n - s1.size();
    }


    return 0;
}
