#include <iostream>
#include <vector>

using namespace std;

vector<int> gr[100001];
vector<int> visited(10001,0);
int n,m;

void dfs(int node)
{
    visited[node] = 1;
    for(auto it : gr[node])
    {
        if(visited[it] == 0)
        {
            dfs(it);
        }
    }
}
vector<int> res;
int main()
{
    cin>>n>>m;
    for(int i = 1; i <= m; i++)
    {
        int x1,x2;
        cin>>x1>>x2;
        gr[x1].push_back(x2);
        gr[x2].push_back(x1);
    }
    int counter = 0;
    for(int i = 1; i <= n;i++)
    {
        if(visited[i] == 0)
        {
            counter++;
            res.push_back(i);
            dfs(i);
        }
    }
    cout<<counter-1<<endl;
    for(int i = 1; i < (int)res.size();i++)
    {
        cout<<res[i-1]<< " "<<res[i]<<endl;
    }
    return 0;
}
