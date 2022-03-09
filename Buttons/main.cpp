#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter = 0;
    int res = 0;
    for(int i = n ; i > 0;i--)
    {
        if(counter <= 1)
        {
            res += i * 1;
            counter++;
        }
        else
        {
            res += i * counter;
            counter++;
        }
    }
    cout<<res;

    return 0;
}
