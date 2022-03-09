#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[n];
    for(int i = 0; i < n;i++)
    {

        cin >> arr[i];
    }
    int counter = 1;
    int res = -1;
    for(int i = 0; i < n;i++)
    {
        for(int j = i+1; j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
            }
        }
        if(res < counter)
        {
            res = counter;
        }
        counter = 1;
    }
    cout<<res<<endl;
    return 0;
}
