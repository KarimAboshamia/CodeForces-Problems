#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long num;
    long long pos;
    cin>>num;
    cin>>pos;
    if(num % 2 != 0 )
    {
        if(pos >= num/2 + 2)
        {
            cout<< (pos-1) - (num - pos);
        }
        else
        {
            cout<<pos + (pos-1);
        }
    }
    else
    {
        if(pos >= ceil(num/2) + 1)
        {
            cout<< (pos) - (num - pos);
        }
        else
        {
            cout<<pos + (pos-1);
        }

    }


    return 0;
}
