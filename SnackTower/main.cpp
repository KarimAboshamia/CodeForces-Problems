#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{

    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 1; i <n+1;i++)
    {
        cin>>arr[i];
    }
    int big = n;
    bool arrVis[n+1];
    for(int i = 1; i < n+1;i++)
    {
        arrVis[arr[i]] = true;
        while(arrVis[big] && big > 0)
        {
            cout<<big<<" ";
            big--;
        }
        cout<<endl;
    }

    return 0;
}
