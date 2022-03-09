#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m];
    for(int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    int sum = 0;
    for(int i = 0; i < n;i++)
    {
        if(arr[i] < 0)
        {
            sum+= arr[i];
        }
    }
    cout<<abs(sum)<<endl;
    return 0;
}
