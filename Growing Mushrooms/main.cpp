#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<pair<double,int>>v1;
    for(int i = 0; i < n; i++)
    {
        double s1, s2;
        cin>>s1>>s2;
        double speed;

            speed = max((max(s1,s2) * t1) - (max(s1,s2) * t1) * (k/100.0) + min(s1,s2) * t2,
                        (min(s1,s2) * t1) - (min(s1,s2) * t1) * (k/100.0) + max(s1,s2) * t2);
            v1.push_back(make_pair(-1*speed,i+1));

    }
    sort(v1.begin(),v1.end());
    for(int i = 0; i < n; i++)
    {
        cout<<fixed;
        cout<<v1[i].second<< " "<<setprecision(2)<<-1*v1[i].first<<endl;
    }

    return 0;
}
