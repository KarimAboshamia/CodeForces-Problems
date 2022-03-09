#include <iostream>
#include <set>
using namespace std;

int main()
{
    int levels;
    cin>>levels;
    int y;
    int x;
    set<int> s1;
    int k;
    cin>>k;
    for(int i = 0; i < k;i++)
    {
        cin>>y;
        s1.insert(y);
    }
    int b;
    cin>>b;
    for (int i = 0 ;i < b;i++)
    {
        cin>>x;
        s1.insert(x);
    }
    if(s1.size() == levels)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
