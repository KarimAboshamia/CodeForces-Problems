#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int input;
    cin>>input;
    int arr[input];
    long long minC, maxC;
    for(int i = 0 ; i < input; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < input ; i++)
    {
        if(i == 0)
        {
            maxC = abs(arr[i] - arr[input-1]);
            minC = abs(arr[i] - arr[i+1]);
            cout<<minC<<" "<< maxC<<endl;
        }
        else if(i == input - 1)
        {
            maxC = abs(arr[input-1]-arr[0]);
            minC = abs(arr[input-1] - arr[input-2]);
            cout<<minC<<" "<< maxC<<endl;
        }
        else
        {
            maxC = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[input-1]));
            minC = min(abs(arr[i] - arr[i+1]), abs(arr[i]-arr[i-1]));
            cout<<minC<<" "<< maxC<<endl;
        }
    }
    return 0;
}
