#include <iostream>
#include <set>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int arr[k];
    int rated = 0;
    int unrated = 0;
    int maybe = 0;
    for(int i = 0; i < k;i++)
    {
        int y;
        int x;
        cin>>y;
        cin>>x;
        if(y!=x)
        {
            rated = 1;
            arr[i] = y;
        }
        else
        {
            arr[i] = y;
        }
    }
    if(rated == 1)
    {
        cout<<"rated"<<endl;
        return 0;
    }
    for(int i = 0; i < k;i++)
    {
        for(int j= i + 1; j<k;j++)
        {
            if(arr[i] < arr[j])
            {
                unrated = 1;
            }
        }
    }
    if(unrated == 1)
    {
        cout<<"unrated"<<endl;
    }
    else
    {
        cout<<"maybe"<<endl;
    }
    return 0;
}
