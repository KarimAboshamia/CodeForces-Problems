#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    sort(arr,arr+n, greater<int>());
    if(k > n)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(k == 1)
    {
        cout<<arr[0]<<" "<<0<<endl;
        return 0;
    }
    else
    {

        int resX = arr[k-1];
        int y = arr[k-1];
        cout<<resX<<" "<<y<<endl;
    }
    return 0;
}
