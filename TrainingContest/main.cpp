#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(), cout.tie();
    int n;
    cin>>n;
    while(n !=0)
    {
        int k;
        cin>>k;
        vector<int>arr;
        for(int i = 0; i < k; i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        for(int i = 0; i < k-1;i++)
        {
            if(arr[i] == -1 && arr[i+1] == -1)
            {
                arr.erase(arr.begin() + i);
                arr.erase(arr.begin()+i+1);

            }
            for(int i = 0; i < k;i++)
            {
                cout<<arr[i]<<' ';
            }
            cout<<endl;
        }







        n--;
    }
    return 0;
}