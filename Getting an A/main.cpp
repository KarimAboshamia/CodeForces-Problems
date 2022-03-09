#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    double res = 0;
    for(int i = 0; i < n;i++)
    {
        res += arr[i];
    }
    res = res / n;
    if(res >= 4.50)
    {
        cout<<0;

    }
    else
    {
        sort(arr, arr+n);
        int counter = 0;
        while(res < 4.50)
        {
            counter++;
            for(int i = counter; i < n;i++)
            {
                res+= arr[i];
            }
            res += 5* counter;
            res /= n;

        }
        cout<<counter;
    }
    return 0;
}
