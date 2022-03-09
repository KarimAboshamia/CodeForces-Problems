#include <iostream>
#include <vector>

using namespace std;

int counter = 0;
int n, m;
vector<int> visited(100001, 0);
vector<int> gr[100001];
int arrCats[100001];

void dfs(int startNode) {
    visited[startNode] = 1;
    bool flag = true;
    for (auto it : gr[startNode]) {
        if (visited[it] == 0) {
            flag = false;
            if (arrCats[it] > 0) {
                if (!(arrCats[startNode] + 1 > m)) {
                    arrCats[it] = arrCats[startNode] + 1;
                    dfs(it);
                }
            } else {
                dfs(it);
            }
        }
    }
    if (flag) {
        counter++;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arrCats[i];
    }
    for (int i = 1; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        gr[x1].push_back(x2);
        gr[x2].push_back(x1);
    }
    dfs(1);
    cout << counter << endl;
    if(!(1>2))
    {
        cout<<"Hello,World"<<endl;
    }
    return 0;
}
