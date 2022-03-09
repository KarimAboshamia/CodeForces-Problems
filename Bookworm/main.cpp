#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int temp = abs(d - c);
    if(temp == 1)
    {
        if(c <= d)
        {
            int res = 2 *b;
            cout<<res<<endl;
        }
        else
        {
            int res = (temp+1) * a +b*2;
            cout<<res;
        }

    }
    else if(temp == 0)
    {
        int res = a;
        cout<<res<<endl;
    }
    else
    {
        if(c <= d)
        {
            int res = (temp-1)*a + temp * b*2;
            cout<<res<<endl;
        }
        else
        {
            int res = (temp+1) * a + temp *b*2;
            cout<<res;
        }
    }

    return 0;
}
