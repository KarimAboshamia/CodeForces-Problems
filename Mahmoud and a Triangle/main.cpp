#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin>>n;
    unsigned long long arr[n];
    unsigned long long temp;
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i = 0; n-i >= 3; i++)
    {
        temp = arr[i] + arr[i+1];
        if(temp > arr[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
