#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, a;
    cin>>n;
    cin>>m;
    cin>>a;
    long long a1 = (n / a) + ((n%a)!= 0);

    long long a2 = (m / a) + ((m%a)!= 0);
    cout<<a1 * a2;
    return 0;
}
