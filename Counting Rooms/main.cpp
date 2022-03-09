#include <iostream>
#include <vector>
using namespace std;

int n, m;
long long counter = 0;
vector<vector<int>> visited(10001,vector<int>(10001,0));
vector<vector<int>> gr(10001,vector<int>(10001));
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
    if(x < 1 || x > n || y < 1 || y > m)
        return false;
    if(visited[x][y] == 1 || gr[x][y] == 1)
        return false;

    return true;
}

void dfs(int x, int y)
{
    visited[x][y] = 1;
    for(int i = 0; i < 4; i++)
    {
        if(isValid(x+dx[i],y+dy[i]))
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}


int main()
{

    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        string st;
        cin>>st;
        for(int j = 1; j <= n; j++)
        {
            if(st[j-1] == '#')
            {
                gr[i][j] = 1;
            }
            else
            {
                gr[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(visited[i][j] == 0 && gr[i][j] == 0)
            {
                dfs(i,j);
                counter++;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
