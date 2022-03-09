#include <iostream>
#define _ ios::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;

    vector<vector<int>>arr(n,vector<int>(m,0));
    vector<pair<int,int>>r;
    vector<pair<int,int>>c;

    for(int i = 0; i < k; i++)
    {
        int op, r_c, color;
        cin>>op>>r_c>>color;
        if(op == 1)
        {
            auto it = std::find_if( r.begin(), r.end(),
                                    [r_c](const pair<int, int>& element){ return element.first == r_c;} );
            if(it!=r.end())
            {
                it->second = color;
            }
            else
            {
                r.push_back(make_pair(r_c,color));
            }
        }
        else
        {
            auto it = std::find_if( c.begin(), c.end(),
                                    [r_c](const pair<int, int>& element){ return element.first == r_c;} );
            if(it!=c.end())
            {
                it->second = color;
            }
            else
            {
                c.push_back(make_pair(r_c,color));
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
