#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<long long>citiesX;
    vector<long long>citiesY;
    for(int i = 0; i < n; i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        citiesX.push_back(temp1);
        citiesY.push_back(temp2);
    }
    sort(citiesX.begin(),citiesX.end());
    sort(citiesY.begin(),citiesY.end());
    cout<<abs(max((citiesX[n-1]-citiesX[0]),(citiesY[n-1]-citiesY[0]))*max((citiesX[n-1]-citiesX[0]),(citiesY[n-1]-citiesY[0])));

    return 0;
}
