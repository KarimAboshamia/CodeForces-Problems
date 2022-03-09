#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int temp = n;
    vector<int> v1[n+1];
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }
    int counter = 0;
    int flag = false;
    while(flag == false)
    {
        flag = true;
        for(int i = 0; i <= temp; i++)
        {
            if(v1[i].size() == 1) //reprimands
            {
                int temp = v1[i].front();
                vector<int>::iterator it;
                it = find(v1[temp].begin(),v1[temp].end(),i);
                if(it != v1[temp].end())
                {
                    *it = 0;
                }
                //v1[temp].erase(remove(v1[temp].begin(), v1[temp].end(), v1[i]), v1[temp].end());
                v1[i].pop_back();
                flag = false;
            }
        }
        int iteration = 0;
        while(iteration <= n)
        {
            vector<int>::iterator it;
            it = find(v1[iteration].begin(),v1[iteration].end(),0);
            if(it != v1[iteration].end())
            {
                v1[iteration].erase(it);
            }
            else
            {
                iteration++;
            }
        }
        if(flag == false)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
