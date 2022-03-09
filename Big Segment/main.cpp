#include <iostream>
#include <vector>
using namespace std;

int main()
{

    long long n;
    cin>>n;
    long long arrBegin[n];
    long long arrEnd[n];
    for(long long i = 0;i<n;i++)
    {
        long long f1;
        cin>>f1;
        arrBegin[i] = f1;
        long long f2;
        cin>>f2;
        arrEnd[i]= f2;
    }
    long long minimum = 0;
    long long maximum = 0;
    for(long long i = 0; i < n;i++)
    {
        if(arrEnd[maximum] <= arrEnd[i])
        {
            maximum = i;
        }
    }
    int maxNum = arrEnd[maximum];
    for(long long i = 0; i < n;i++)
    {
        if(arrBegin[minimum] >= arrBegin[i])
        {
            minimum = i;

        }
    }
    for(long long i = 0; i < n; i++)
    {
        if(arrBegin[i] == arrBegin[minimum] && arrEnd[i] == maxNum)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
