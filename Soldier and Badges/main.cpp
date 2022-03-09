#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int>badges;
    int counter = 0;
    int arr[n];

    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int maker = 1;
    for(int i = 0; i < n ;i++)
    {
        if(badges.find(arr[i]) ==  badges.end())
        {
            badges.insert(make_pair(arr[i],1));
        }
        else
        {

            badges.insert(make_pair(badges.rbegin()->first+1,1));
            counter+= abs(arr[i] - badges.rbegin()->first);
        }

    }
    cout<<counter<<endl;
    return 0;
}
