#include <iostream>
#include <vector>
using namespace std;

vector<int>v1[100000];
vector<int>init[100000];
vector<int>goal[100000];
vector<int> result;
int counter = 0;

vector<int> visited(51,-1);//Array to decided visited nodes for 'dfs'

void dfs(int v, int evenTimes = 0, int oddTimes = 0)
{
    visited[v] = 1;

    for(int i = 0; i < v1[v].size();i++)
    {
        int child = v1[v][i];
        if(visited[child] == -1)
        {
            dfs(child);
        }
    }
}


int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }
    for(int i = 0; i < n;i++)
    {
        int initial;
        cin>>initial;
        init->push_back(initial);
    }
    for(int i = 0; i < n; i++)
    {
        int goalP;
        cin>>goalP;
        goal->push_back(goalP);
    }
    dfs(1);
    return 0;
}
