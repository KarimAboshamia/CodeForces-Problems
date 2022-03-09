#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long m;
    cin>>n;
    cin>>m;
    long long arr[n];
    long long arr2[m];
    long long cn = 1;
    long long cm = 1;
    for(int i = 0; i < n;i++)
    {
        arr[i] = cn;
        cn++;
    }
    for(int i = 0; i < m;i++)
    {
        arr2[i] = cm;
        cm++;
    }
    long long counter = 0;
    for(int i =0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            long long res = arr[i] + arr2[j];
            if((res% 5)== 0)
            {
                counter ++;
            }
        }
    }
    cout<<counter;
    return 0;
}
