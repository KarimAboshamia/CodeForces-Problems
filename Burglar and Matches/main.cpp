#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector< pair <int,int> > vect;
    for(int i = 0; i < m;i++)
    {
        int temp;
        int temp2;
        cin>>temp;
        cin>>temp2;
        vect.push_back(make_pair(temp,temp2));
    }
    sort(vect.begin(),vect.end(),sortbysec);
    int sum =0;
    for(int i = 0; i < m && n!=0;i++)
    {
        if(n >= vect[i].first)
        {
            n-= vect[i].first;
            sum+= (vect[i].second * vect[i].first);
        }
        else
        {
            sum+=(vect[i].second*n);
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
