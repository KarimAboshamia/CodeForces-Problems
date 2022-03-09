#include <iostream>
#include <map>
#include <vector>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main() {
    int n;
    cin >> n;
    int k;
    cin>>k;
    map<char, unsigned long long> map1;
    for (int i = 0; i < n; i++)
    {
        char letter;
        cin>>letter;
        if(map1.find(letter) ==  map1.end())
        {
            map1.insert(make_pair(letter,1));
        }
        else
        {
            map1[letter]++;
        }
    }
    int currentMax = 0;
    vector<pair<char,int>>v1;
    for(auto it = map1.begin(); it != map1.end();it++)
    {
        v1.push_back(make_pair(it->first,it->second));
    }
    sort(v1.begin(),v1.end(),sortbysec);
    int counter = 0;
    unsigned long long result = 0;
    while(k!=0)
    {
        if(v1[counter].second <= k )
        {
            result += v1[counter].second * v1[counter].second;
            k -= v1[counter].second;
            counter++;
        }
        else
        {
            v1[counter].second -= (v1[counter].second - k);
            result += v1[counter].second * v1[counter].second;
            k = 0;
            counter++;
        }
    }
    cout<<result<<endl;
    return 0;

}
