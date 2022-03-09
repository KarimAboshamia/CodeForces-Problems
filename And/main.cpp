#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<int>v1;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(find(v1.begin(),v1.end(),temp)!= v1.end())
        {
            cout<<0;
            return 0;
        }
        else
        {
            v1.push_back(temp);
        }
    }
    for(int i = 0; i < n; i++)
    {
        int temp = v1[i] & x;
        for(int j = 0; j < n; j++)
        {
            if(temp == v1[j] && i != j)
            {
                cout<<1<<endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
         v1[i] = v1[i] & x;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(v1[i] == v1[j])
            {
                cout<<2<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
