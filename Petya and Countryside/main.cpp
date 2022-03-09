#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int arr[k];
    for(int i = 0; i < k; i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    int counter[k];
    for(int i =0; i < k; i++)
    {
        counter[i] = 1;
    }
    for(int i = 0; i < k; i++)
    {
        if(i < k-1)
        {
            for(int j = i; j < k ; j++)
            {
                if(arr[j] >= arr[j+1])
                {
                    counter[i]++;
                }
                else
                {
                    break;
                }
            }

        }
        for(int y = i; y > 0; y--)
        {
            if(arr[y] >= arr[y-1])
            {
                counter[i]++;
            }
            else
            {
                break;
            }
        }
    }
    sort(counter, counter+k);
    cout<<counter[k-1]<<" ";

    return 0;
}
