#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string>s1;
    string arr[n];
    for(int i = 0; i < n;i++)
    {
        string k;
        cin>>k;
        s1.insert(k);
        arr[i] = k;
    }
    int count1 = 0;
    int count2 = 0;
    string team1;
    string team2;
    for(int i = 0; i < n;i++)
    {
        if(*s1.begin() == arr[i])
        {
            count1++;
            team1 = arr[i];
        }
        else
        {
            count2++;
            team2 = arr[i];
        }
    }

    if(count1 > count2)
    {
        cout<<team1;
    }
    else
    {
        cout<<team2;
    }
    return 0;
}
