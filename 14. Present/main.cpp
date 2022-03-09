#include <iostream>

using namespace std;

int main()
{
    int friends;
    cin>>friends;
    int arr[friends];
    int arr2[friends];
    int counter = 1;
    for(int i = 0 ;i<friends;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i < friends;i++)
    {
        arr2[arr[i]-1] = counter;
        counter++;
    }
    for(int i = 0 ; i < friends; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
