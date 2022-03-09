#include <iostream>

using namespace std;

int shootBird(int x, int y, int *arr,int sizeOfArray)
{
    int birdsToLeft = (arr[x] - (arr[x] - y)) - 1;
    int birdsToRight = (arr[x] - y);
    if(x == sizeOfArray - 1)
    {
        arr[x-1] += birdsToLeft;
        arr[x] = 0;
    }
    else if(x == 0)
    {
        arr[x+1] += birdsToRight;
        arr[x] = 0;
    }
    else
    {
        arr[x-1] += birdsToLeft;
        arr[x+1] += birdsToRight;
        arr[x] = 0;
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int(n);
    for(int i = 0 ; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    int numberOfShots;
    cin>>numberOfShots;
    for(int i = 0; i < numberOfShots ;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        shootBird(x-1,y,arr,n);
    }
    for(int i = 0; i < n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
