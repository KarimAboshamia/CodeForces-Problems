#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>*v1 = new vector<int>[100001];
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v1[temp].push_back(i);
    }
    int res = 0;
    int temp;
    int counter;
    vector<pair<int,int>>resVec;
    for(long long i = 0; i < 1e5+1; i++)
    {
        temp = v1[i].size();
        counter = 0;
        int place = 0;
        int counterIndex = 0;

        while(counterIndex<v1[i].size()-1)//1 2 3
        {
            if(v1[i].size() == 0)
            {
                break;
            }
            place = abs(v1[i][0] - v1[i][1]);
            int temp = abs(v1[i][counterIndex]-v1[i][counterIndex+1]);
            if(place == temp)
            {
                counterIndex++;
            }
            else
            {
                break;
            }
        }
        if(counterIndex == v1[i].size()-1)
        {
            res++;
           resVec.push_back(make_pair(i,place));
        }
    }
    cout<<res<<endl;
    for(int i = 0; i < resVec.size();i++)
    {
        cout<<resVec[i].first<<" "<<resVec[i].second<<endl;
    }
    return 0;
}
