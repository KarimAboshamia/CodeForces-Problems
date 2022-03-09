#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int arr[5];
    int testCases;
    cin>>testCases;
    int n,m,a,d;
    for(int i = 0 ; i < testCases;i++)
    {
        cin>>n;
        cin>>m;
        cin>>a;
        cin>>d;
        for(int j = n; j <= m;j++)
        {
            if(j%a != 0 && j%(a+d)!=0 && j%(a+2*d)!=0 && j%(a+3*d)!=0 &&j%(a+4*d)!=0)
            {
                counter++;
            }

        }
        cout<<counter;
        counter = 0;
    }

    return 0;
}
