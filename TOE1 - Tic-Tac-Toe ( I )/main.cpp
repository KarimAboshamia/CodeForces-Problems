#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;

int xAxis[] = {1, 0, -1, 0, 1, 1, -1,-1};
int yAxis[] = {0, 1, 0, -1, 1, -1, 1,-1};
map<pair<int, int>, int> len;


bool isValid(int r, int c){
    return (r >= 0 & c >= 0 && r < 100000000 && c < 10000000);
}


int BFS(int startPosX, int startPosY, int endPosX, int endPosY, set<pair<int,int>>visited)
{
    queue<pair<int,int>>q;
    pair<int,int> startPosition = {startPosX, startPosY};
    len[startPosition] = 0;
    q.push(startPosition);
    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second; q.pop();
        pair<int,int> checkPos = {r,c};
        if(r == endPosX && c == endPosY) return len[checkPos];
        for(int i = 0; i < 8; i++)
        {
            int newPositionX = r + xAxis[i];
            int newPositionY = c + yAxis[i];
            pair<int,int>checkFinal = {newPositionX, newPositionY};
            if(visited.count(checkFinal) == 0 || len.count(checkFinal))
            {
                continue;
            }
            else
            {
                q.push(checkFinal);
                len[checkFinal]  = len[checkPos] + 1;
            }
        }
    }
    return -1;
}




int main() {
    long long x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    set<pair<int,int>>veg;
    int c;
    cin>>c;
    for(int i = 0; i < c;i++)
    {
        long long r,a,b;
        cin>>r>>a>>b;
        for(long long i = a-1; i < b;i++)
        {
            veg.insert({r-1,i});
        }
    }
    int mov = BFS(x0-1, y0-1, x1-1, y1-1,veg);

    cout<<mov<<endl;
    return 0;
}
