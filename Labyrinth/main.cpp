#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
vector<vector<int>> gr(10001,vector<int>(10001));
vector<vector<int>> visited(10001,vector<int>(10001,0));
vector<vector<string>> road(10001,vector<string>(1001, ""));
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

bool isVisited(int x, int y)
{
    if(x < 1 || x > n || y < 1 || y > m)
        return false;

    if(visited[x][y] == 1 || gr[x][y] == 1)
        return false;

    return true;
}

int BFS(int sr, int sc, int tr, int tc){
    visited[sr][sc] = 1; // distance to source == 0
    queue<int> q;
    q.push(sr); q.push(sc);
    while (!q.empty()){
        int r = q.front(); q.pop(); // we are at (r,c)
        int c = q.front(); q.pop();
        if (r == tr && c == tc) return visited[r][c];
        for (int k = 0; k < 4; k++){ // try all 8 moves
            int nr = r + dx[k]; // new row
            int nc = c + dy[k]; // new column
            if (!isVisited(nr, nc))
            {
                continue;
            }
            else
            {
                visited[nr][nc] = visited[r][c] + 1, q.push(nr), q.push(nc);
                if(dx[k] == 1 && dy[k] == 0)
                {
                    road[nr][nc] = road[r][c] + 'D';
                }
                else if(dx[k] == -1 && dy[k]== 0)
                {
                    road[nr][nc] = road[r][c] + 'U';
                }
                else if(dx[k] == 0 && dy[k] == 1)
                {
                    road[nr][nc] = road[r][c] + 'R';

                }
                else if(dx[k] == 0 && dy[k] == -1)
                {
                    road[nr][nc] = road[r][c] + 'L';
                }
            }
        }
    }
    return -1;
}



int main()
{
    cin>>n>>m;
    int x0 = 1,y0 = 1 ,x1 = 1 ,y1 = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            char tr;
            cin>>tr;
            if(tr == '#')
            {
                gr[i][j] = 1;
            }
            else if (tr == '.')
            {
                gr[i][j] = 0;
            }
            else if(tr == 'A')
            {
                gr[i][j] = 0;
                x0 = i;
                y0 = j;
            }
            else
            {
                gr[i][j] = 0;
                x1 = i;
                y1 = j;
            }
        }
    }
    int res = BFS(x0,y0,x1,y1)-1;
    if(res == -1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<res<<endl;
        cout<<road[x1][y1]<<endl;
    }
    return 0;
}
