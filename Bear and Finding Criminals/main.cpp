#include <iostream>

using namespace std;

int main()
{
    int n;
    int a;
    cin>>n;
    cin>>a;
    int arr[n];
    for(int i =0; i < n;i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    int y  = a-1;
    int k = a-1;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if((arr[y] == arr[k] && arr[y] == 1) || (arr[y] == 1 && k == -1) || (arr[k] == 1 && y == n))
        {
            if((y == k) || (arr[y] == 1 && k == -1) || (arr[k] == 1 && y == n))
            {
                counter++;
            }
            else
            {
                counter+=2;
            }

        }
        if(y < n)
        {
            y++;
        }
        if(k >=0)
        {
            k--;
        }
    }
    cout<<counter;
    return 0;
}
