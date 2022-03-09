#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    long long counter = n * n;
    vector<vector<long long>> v1(n,vector<long long>(n));
    for (int i = 0; i < m; i++)
    {
        int temp;
        int temp2;
        cin>>temp;
        cin>>temp2;
        for(int i = 0; i < n;i++
        {
            v1[temp-1][i] = 1;
            v1[i][temp2-1] = 1;
        }
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v1[i][j] == 1)
                {
                    counter--;
                }
            }
        }
        cout<<counter<<" ";
        counter = n * n;
    }
    return 0;
}
