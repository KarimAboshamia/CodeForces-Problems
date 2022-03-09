#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long x;
    long long y;
    cin>>x;
    cin>>y;
    long double res1 = log(x) * y;
    long double res2 = log(y) * x;
    float epsilon = 0.01f;
    if(fabs(res1-res2) < epsilon)
    {
        cout<<'='<<endl;
    }
    else if(res1 > res2)
    {
        cout<<'>'<<endl;
    }
    else if(res1 < res2)
    {
        cout<<'<'<<endl;
    }
    return 0;
}
