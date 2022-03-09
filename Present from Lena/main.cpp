#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n;i++)
    {
        cout<<0;
        for(int j = 0; j < i;j++)
        {
            cout<<j+1;
        }
        for(int b = i; b>0;b--)
        {
            cout<<b;
        }
        cout<<0<<endl;
    }
    return 0;
}
