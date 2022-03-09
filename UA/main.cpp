#include <iostream>
#include <vector>
using namespace std;

vector<int> v1[100000];
vector<int> visited(100000,-1);
int n;
int res = 0;
void dfs()
{
    for(int i = 1; i <= n; i++)
    {
        if(v1[i].size() > res)
        {
            res = v1[i].size();
        }
    }
}

int main() {

    cin>>n;
    for(int i = 0; i < n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    dfs();
    cout<<res+1<<endl;
    return 0;
}
