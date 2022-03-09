#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, f;
    cin >> n >> f;
    unsigned long long res = 0;
    vector<pair<unsigned long long,unsigned long long>> v1;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x == 0)
        {
            continue;
        }
        else if(x >= y)
        {
            res += y;
        }
        else
        {
            int temp = x * 2;
            if(temp >= y)
            {
                v1.push_back(make_pair(y,x));
            }
            else
            {
                v1.push_back(make_pair(temp,x));
            }
        }
    }
    sort(v1.begin(),v1.end());
    for(int i = v1.size()-1;i>=0;i--)
    {
        if(f != 0)
        {
            res+=v1[i].first;
            f--;
        }
        else
        {
            res+=v1[i].second;
        }
    }
    cout<<res<<endl;
    return 0;
}
