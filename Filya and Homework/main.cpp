#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int>s1;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        s1.insert(temp);
    }
    set<int>::iterator it = s1.begin();
    int counter = 0;
    int arr[s1.size()];
    while(it != s1.end())
    {
        arr[counter] = *it;
        counter++;
        it++;
    }
    sort(arr,  arr+s1.size());
    int midEl = (s1.size()-1)/2;
    int difF = arr[midEl] - arr[0];
    int difL = arr[s1.size()-1] - arr[midEl];
    if(difF != difL && difF !=0 && difL != 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i < midEl; i++)
    {
        if(arr[midEl] - arr[i] != difF)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i = s1.size()-1; i > midEl;i--)
    {
        if(arr[i] - arr[midEl] != difL)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
