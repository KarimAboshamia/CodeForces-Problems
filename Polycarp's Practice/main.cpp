#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v1;
    for(int i =0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    int counter = 0;
    for(int i = 0; i < k; i++)
    {
        counter += v1[i];
    }
    cout<<counter<<endl;
    int temp = k;
    for(int i = 0; i < k; i++)
    {
        if(n%temp == 0)
        {
            cout<<n/temp<<' ';
        }
        else
        {
            cout<<n%temp<<' ';
            n = n - n%temp;
            temp--;
        }
    }
    return 0;
}
