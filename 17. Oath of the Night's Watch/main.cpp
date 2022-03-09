#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int stewards;
    cin>>stewards;
    vector <int> stew;
    for(int i = 0; i < stewards; i++)
    {
        int k;
        cin>>k;
        stew.push_back(k);
    }
    sort(stew.begin(), stew.end());
    int countStew = 0;
    for(int i = 0 ; i < stewards;i++)
    {
        if(stew[i] > stew[0] && stew[i] < stew[stewards-1])
        {
            countStew++;
        }

    }
    cout<<countStew;
    return 0;
}
