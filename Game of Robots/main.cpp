#include <iostream>

using namespace std;

int main()
{
    int n;
    long long k;
    cin>>n;
    cin>>k;
    long long arr[n];
    for(int i = 0; i < n;i++)
    {
        long long temp;
        cin>>temp;
        arr[i] = temp;
    }
    long long arrOfStart[n];
    arrOfStart[0] = 0;
    arrOfStart[1] = 1;
    for(long long i = 2; i < n;i++)
    {
        arrOfStart[i] = (i * (i+1))/2;
    }
    for(long long i =0; i < n-1;i++)
    {
        if(k > arrOfStart[i] && k < arrOfStart[i+1])
        {
            int res = k - arrOfStart[i];
            cout<<arr[res-1];
            return 0;
        }
    }
    if(k == 2 || k==1)
    {
        cout<<arr[0];
    }
    else if(k == 3)
    {
        cout<<arr[1];
    }
    return 0;
}
