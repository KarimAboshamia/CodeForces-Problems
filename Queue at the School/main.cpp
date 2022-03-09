#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    string qu;
    cin>>qu;
    while(t !=0)
    {
        for(int i = 0; i < n ; i++)
        {
            if(qu[i] == 'B' && qu[i+1] == 'G')
            {
                swap(qu[i],qu[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<qu;
    return 0;
}
