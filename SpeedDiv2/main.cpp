#include <iostream>
#include <queue>
#include<cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(), cout.tie();
    int t;
    cin>>t;
    int testCase = 1;
    while(t--) {
        int x1,y1;
        cin >> x1 >> y1;
        vector<vector<int>> v1;
        for (long long i = 1; i <= x1; i++) {
            for (long long j = 1; j <= y1; j++) {
                cin>>v1[i][j];
            }
        }
        for(long long i = 1; i <= x1; i++)
        {
            for(long long j = 1; j  <= y1; j++)
            {
                if(i-1 == 0 && j-1 == 0)
                {
                    v1[i][j] += 0;
                }
                else if(i - 1 == 0)
                {
                    v1[i][j] += max(0,v1[i][j-1]);
                }
                else if(j-1 == 0)
                {
                    v1[i][j] += max(v1[i-1][j],0);
                }
                else
                {
                    v1[i][j] += max(v1[i-1][j],v1[i][j-1]);
                }
            }
        }
        cout<<"Case "<<testCase<<": "<< v1[x1][y1]<<endl;
        testCase++;
    }
    return 0;
}