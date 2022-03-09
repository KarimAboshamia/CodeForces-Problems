#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+1];
    arr[0] = 0;
    for(int i = 1 ; i<=n;i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    int counter =0;
    for(int i = 0; i < n;i++)
    {
        counter = counter + (arr[i] - arr[i+1]);
    }
    cout<<abs(counter);
    return 0;
}
