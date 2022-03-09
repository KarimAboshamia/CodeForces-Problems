#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long arr[n];
    long long arr2[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    int first = 0;
    int second = 0;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr2[i] && counter == 0)
        {
            first = i;
            counter++;
        }
        else if(arr[i] != arr2[i] && counter >= 1)
        {
            second = i;
        }
    }
    reverse(arr+first,arr+second+1);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr2[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<first+1<<" "<<second +1<<endl;
    return 0;
}
