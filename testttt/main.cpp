#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    vector<int>k;
    k.push_back(2);
    k.push_back(3);
    k.push_back(4);
    k.push_back(5);
    k.erase(k.begin() + 2);
    for(int i = 0; i < k.size();i++)
    {
        cout<<k[i]<<' ';
    }
    return 0;
}
