#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> map1;
    vector<pair<int,int>> v1;
    for (int i = 0; i < n; i++)
    {
        int home;
        int away;
        cin>>home;
        cin>>away;
        v1.push_back(make_pair(home,away));
        if(map1.find(home) ==  map1.end())
        {
            map1.insert(make_pair(home,1));
        }
        else
        {
            map1[home]++;
        }
    }
    for(int i = 0; i < n;i++)
    {
        int home = 2* (n-1)/2;
        int away = 2* (n-1)/2;
        home += map1[v1[i].second];
        away -= map1[v1[i].second];
        cout<<home<<' '<<away<<endl;
    }

    return 0;

}
