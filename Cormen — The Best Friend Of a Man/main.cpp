#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    int output = 0;
    int res;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] + arr[i+1] < k)
        {

            output += abs(k - arr[i] - arr[i+1]);
            arr[i+1] += abs(k - arr[i] - arr[i+1]);

        }

    }
    cout<<output<<endl;
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<' ';
    }

    return 0;
}
