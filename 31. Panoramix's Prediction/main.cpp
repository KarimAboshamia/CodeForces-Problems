#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;
    int counter = 0;
    int count2;
    for(int i = x+1; i<=y;i++)
    {
        for(int j = 2; j<x;j++)
        {
            if(i%j ==0)
            {
                counter++;
            }
        }
        if(counter == 0 && i != y)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(counter == 0 && i == y)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        counter = 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
