#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int k;
    while(cin>>k, k !=0)
    {

        int y = sqrt(k);
        if(y * y  == k)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
