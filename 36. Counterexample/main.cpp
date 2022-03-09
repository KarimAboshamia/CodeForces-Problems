#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long l;
    long long r;
    cin>>l;
    cin>>r;
    if(l%2 != 0)
    {
        l++;
    }
    if(abs(l-r) < 2)
    {
        cout<<-1;
        return 0;
    }
    cout<<l<<" "<<l+1<<" "<<l+2;
    return 0;
}
