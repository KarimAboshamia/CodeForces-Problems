#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;
    vector<unsigned long long> v1;
    unsigned long long value = 0;
    for(int i = 0; i < n; i++)
    {
        unsigned long long temp;
        cin>>temp;
        value+=temp;
        v1.push_back(value);
    }
    unsigned long long totA = 0;
    for(unsigned long long i = 0; i < q; i++)
    {
        unsigned long long temp;
        cin>>temp;
        totA += temp;
        auto it = lower_bound(v1.begin(),v1.end(),totA);
        if(totA >= v1.back())
        {
            cout<<v1.size()<<endl;
            totA = 0;
        }
        else
        {
            if(totA >= *it)
            {
                cout<<v1.size()-(it-v1.begin()+1)<<endl;
            }
            else
            {
                cout<<v1.size()-(it-v1.begin())<<endl;
            }
        }
    }
    return 0;
}
