#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool sortbysec(const pair<int,int>&v,const pair<int,int>&n)
{
    return(v.second<n.second);
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>m1;
    vector<int>total;
    int tot = 0;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        for(int i = 0; i < m; i++)
        {
            int temp;
            cin>>temp;
            tot = tot + temp;
        }
        total.push_back(tot);
        tot = 0;
        m1.push_back(make_pair(i+1,m));
    }
    int flag = true;
    auto max =  max_element(m1.begin(),
                m1.end(),
                [](const auto& lhs, const auto& rhs) { return lhs.second < rhs.second; });
    auto min = max_element(m1.begin(),
                           m1.end(),
                           [](const auto& lhs, const auto& rhs) { return lhs.second > rhs.second; });
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((m1[i].second == m1[j].second && m1[i].first!= m1[j].first && total[i] == total[j] && n!= 1) || (max->second == m1[i].second && min->second<m1[i].second))
            {
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout<<"YES"<<endl;
        }
        flag = true;
    }
    return 0;
}
