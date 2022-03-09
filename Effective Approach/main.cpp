#include <iostream>

using namespace std;
long long numOfComparisions = 0;
long long numOfComparisions2 = 0;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i = 1; i <= n; i++)
    {
        int temp;
        cin>>temp;
        arr[temp] = i;
    }
    long long m;
    cin>>m;
    for(long long i = 0; i<m; i++)
    {
        int temp;
        cin>>temp;
        numOfComparisions += arr[temp];
        numOfComparisions2+= n- arr[temp]+1;
    }
    cout<< numOfComparisions<<' '<< numOfComparisions2;
    return 0;

}
