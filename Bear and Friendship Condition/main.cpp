#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



long long x,y;
void dfs(int v, int n[], vector<int>v1[])
{
    n[v] = 1;
    x++;
    for(int i = 0; i < v1[v].size();i++)
    {
        int child = v1[v][i];
        y++;
        if(n[child] == -1)
        {
            dfs(child,n,v1);
        }
    }
}
int main() {
    int n;
    int m;
    cin>>n>>m;
    vector<int> v1[n+1];
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    int arr[n+1];
    for(int i = 1; i <= n; i++)
    {
        arr[i] = -1;
    }
    int counter = 0;
    for(int i  = 1; i <= n; i++)
    {
        if(arr[i] == -1)
        {
            x=0;
            y= 0;
            dfs(i,arr,v1);
            long long c = x*(x-1)/2;
            y /= 2;
            if(y!=c)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
