#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    long double res = 0;
    long double mainValue = 440.000000;
    for(int i = 0; i < n ; i++)
    {
        long double x,y;
        cin>>x>>y;
        x = x / mainValue;
        x = log2(x);
        x =round(x* 12);
        y = y / mainValue;
        y = log2(y);
        y =round(y* 12);
        res+= y-x;
    }
    long long  int finalRes = round(abs(res));
    cout<<finalRes;
    return 0;
}