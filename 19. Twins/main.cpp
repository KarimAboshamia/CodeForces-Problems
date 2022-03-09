#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int coins;
    cin>>coins;
    vector<int> v1;
    for(int i = 0; i < coins;i++)
    {
        int k;
        cin>>k;
        v1.push_back(k);
    }
    int sum = 0;
    for(int i = 0; i < coins;i++)
    {
        sum+= v1[i];
    }
    sort(v1.begin(),v1.end(), greater<int>());
    int tot = 0;
    int counter = 0;
    for(int i = 0; i < coins;i++)
    {
        tot+= v1[i];
        counter++;
        if(tot > sum/2)
        {
            break;
        }
    }
    cout<<counter;
    return 0;

}
