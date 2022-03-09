#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int x;
    unsigned long long int result = 0;
    cin>> n;
    cin>> x;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        result += arr[i] * x;
        if(x > 1)
        {
            x--;
        }
    }
    cout<<result;
    return 0;
}
