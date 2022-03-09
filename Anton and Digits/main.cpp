#include <iostream>

using namespace std;

int main()
{
    int k2;
    int k3;
    int k5;
    int k6;
    cin>>k2;
    cin>>k3;
    cin>>k5;
    cin>>k6;
    int numOf256 = min(min(k2,k5), k6);
    k2 -= numOf256;
    k5 -= numOf256;
    k6 -= numOf256;
    int numOf32 = min(k2,k3);
    cout<<numOf256*256 + numOf32 * 32;

    return 0;
}
