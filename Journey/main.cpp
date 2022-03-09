#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

long long counter = 0;
vector<long long> gr[100002];
vector<long long> visited(100002,0);
long long length = 0;
vector<long long> res;
vector<long long> roads(100002,0);

void dfs(long long startNode)
{
    visited[startNode] = 1;
    bool flag = true;
    for(auto it : gr[startNode])
    {
        if(visited[it] == 0)
        {
            flag = false;
            roads[it] = 1 + roads[startNode];
            dfs(it);
        }
    }
    if(flag)
    {
        counter++;
        res.push_back(roads[startNode]);
    }
}


int main() {
    long long n;
    cin>>n;
    for(long long i = 1; i < n;i++)
    {
        long long x1,x2;
        cin>>x1>>x2;
        gr[x1].push_back(x2);
        gr[x2].push_back(x1);
    }
    dfs(1);
    long double finalRes = 0.0;
    for(long long i = 0; i < res.size();i++)
    {
        finalRes += (1.0 / counter) * res[i];
    }
    cout<<fixed;
    cout<<setprecision(14)<<(finalRes/counter)<<endl;
    return 0;
}
