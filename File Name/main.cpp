#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string k;
    cin>>k;
    int xcounter = 0;
    int result = 0 ;

    for(int i = 0; i < n; i++)
    {
        if(k[i] == 'x')
        {
            xcounter++;
        }
        else
        {
            if(xcounter >= 3)
            {
                result += xcounter - 2;
                xcounter = 0;
            }
            else
            {
                xcounter = 0;
            }
        }
    }
    if(xcounter >= 3)
    {
        result += xcounter - 2;
        xcounter = 0;
    }
    cout<<result;

    return 0;
}
