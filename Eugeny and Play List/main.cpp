#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct comp_pair_int {
    bool operator()(const pair<int,int> &a, const int & b)
    {
        return (a.second < b);
    }
    bool operator()(const int & a,const pair<int,int> &b)
    {
        return (a < b.second);
    }
};

bool sortbysecdesc(const pair<int,long long> &a,
                   const pair<int,long long> &b)
{
    return a.second < b.second;
}
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    vector<pair<int,long long>>v;
    long long time = 0;
    for(int i = 1; i <= n; i++)
    {
        int ci;
        int ti;
        cin>>ci>>ti;
        time += ci*ti;
        v.push_back(make_pair(i,time));
    }
    sort(v.begin(),v.end(),sortbysecdesc);
    int arr[m];
    for(int i = 0; i < m;i++)
    {
        int num;
        cin>>num;
        auto it = std::lower_bound(v.begin(), v.end(), num, comp_pair_int());
        cout<<it->first<<endl;
    }


    return 0;
}
