#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        string temp;
        cin>>temp;
        int g = temp.find('G');
        int s = temp.find('S');
        arr[i] = s - g;
    }
    sort(arr,arr+n);
    int movs = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            continue;
        }
        else
        {
            movs++;
        }

    }
    if(arr[0] < 0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<movs<<endl;

    return 0;
}
