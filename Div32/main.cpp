#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int> gr;
        for(int i = 1; i <= k; i++)
        {
            if((i % 3 != 0) && (i % 10 != 3))
            {
                gr.push_back(i);
            }
        }
        cout<<gr[k]<<endl;
    }
    return 0;
}
