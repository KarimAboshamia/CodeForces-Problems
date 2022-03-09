#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    queue<int> bfsQueue;
    int arr[20001];
    for (int i = 0; i < 20001; i++)
    {
        arr[i] = -1;
    }
    arr[n] = 0;
    bfsQueue.push(n);
    while(!bfsQueue.empty())
    {
        int u = bfsQueue.front();
        bfsQueue.pop();
        if(u == m)
        {
            cout<<arr[u]<<endl;
            return 0;
        }
        int a = u *2;
        if(a <= 20000&& arr[a] == -1)
        {
            arr[a] = arr[u] +1;
            bfsQueue.push(a);
        }
        int b = u - 1;
        if(b>0 && arr[b] == -1)
        {
            arr[b] = arr[u]+1;
            bfsQueue.push(b);
        }
    }
    return 0;
}
