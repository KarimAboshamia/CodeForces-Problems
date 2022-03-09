#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long k;
    cin>>n;
    cin>>k;
    long long arr[k];
    long long res = 0;
    for(long long i = 0; i < k;i++)
    {
        long long temp;
        cin>>temp;
        arr[i] = temp;
    }
    for(long long i = 1; i < k;i++)
    {
        if(n % arr[res] > n % arr[i])
        {
            res = i;
        }
    }
    long long t = (n - (n%arr[res]));
    cout<<res+1<<" "<<t/arr[res]<<endl;
    return 0;
}
