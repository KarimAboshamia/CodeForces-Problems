#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp < 0) {
            v1.push_back(temp);
        } else {
            v2.push_back(temp);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < v1.size() && k != 0; i++) {
        v1[i] *= -1;
        k--;
    }

    if(v1.size()!=0 && v2.size()!=0)
    {
        if (v2[0] < v1[v1.size() - 1]) {
            if (k % 2 != 0) {
                v2[0] *= -1;
            }
        } else {
            if (k % 2 != 0) {
                v1[v1.size() - 1] *= -1;
            }
        }
    }
    else
    {
        if(v1.size()!=0)
        {
            if(k%2!=0)
            {
                v1[v1.size()-1] *= -1;
            }
        }
        else
        {
            if(k%2!=0)
            {
                v2[0] *= -1;
            }
        }
    }
    int res = 0;
    for(int i = 0; i < v1.size();i++)
    {
        res+=v1[i];
    }
    for(int i = 0; i < v2.size();i++)
    {
        res+=v2[i];
    }

    cout<<res<<endl;

    return 0;
}
