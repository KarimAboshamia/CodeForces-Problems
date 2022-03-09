#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    if(m > round((n*n)/2.0))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int counter = 0;
    cout<<"YES"<<endl;
    int r = 2;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(r % 2 == 0 && counter!= m)
            {
                cout<<"L";
                counter++;
            }
            else
            {
                cout<<"S";
            }
            r++;
        }
        if(n%2==0)
        {
            r++;
        }
        cout<<endl;
    }


    return 0;
}
