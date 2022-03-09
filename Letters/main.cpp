#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<unsigned long long>arr;
    for(int i = 0; i < n; i++)
    {
        unsigned long long temp;
        cin>>temp;
        arr.push_back(temp);
        if(i > 0)
        {
            arr[i] = arr[i-1] + temp;
        }
    }
    for(int i = 0; i <m; i++)
    {
        unsigned long long temp;
        cin >> temp;
        if(temp <= arr[0])
        {
            cout<<1<<' '<<temp<<endl;
        }
        else {

            auto it = (lower_bound(arr.begin(), arr.end(), temp));
            it--;
            cout << it - arr.begin() + 2 << ' ' << temp - *it << endl;
        }
    }
    return 0;
}
