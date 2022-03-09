#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;//Number of Nodes
int m;//Number of Edges
vector<int> visited(101,-1);//Array to decided visited nodes for 'dfs'
vector<int> x;
vector<int> y;

void dfs(int v)
{
    visited[v] = 1;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == -1 && (x[i] == x[v] || y[i] == y[v] ))
        {
            dfs(i);
        }
    }
}

int main() {
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        int temp2;
        cin>>temp>>temp2;
        x.push_back(temp);
        y.push_back(temp2);
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == -1)
        {
            res++;
            dfs(i);
        }
    }

    cout<<res-1<<endl;

    return 0;
}