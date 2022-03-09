#include <iostream>
#include <map>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    map<int,int>m1;
    for(int i = 1; i <= k; i++)
    {
        m1.insert(make_pair(i,0));
    }
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        m1[temp]++;
    }
    int counter = 0;
    int flag = true;
    map<int,int>::iterator it = m1.begin();
    map<int,int>::iterator it2 = m1.begin();
    it2++;
    while(m1.rbegin()->second < n)
    {
        flag = true;
        if(it->second != 0 && it2->second == 0)
        {
            it->second--;
            it2->second++;
            it++;
            if(next(it2) != m1.end())
            {
                it2++;
            }
        }
        else if(it->second!=0 && it2 != m1.end() && it != m1.end())
        {
            it->second--;
            it2->second++;
        }
        if(next(it2) == m1.end())
        {
            it = m1.begin();
            it2 = m1.begin();
            flag = false;
            it2++;
            counter++;
        }
        if(flag == true)
        {
            it++;
            it2++;
        }

    }
    cout<<counter;
    return 0;
}
