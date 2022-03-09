#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    cin>>k;
    vector<vector<int>>v1;
    int arr[k][4];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = 1; j < k; j++)
        {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1] && arr[i][2] < arr[j][2])
            {
                arr[i][0] = 0;
                break;
            }
        }
    }

    int index = 0;
    for(int i = 1; i < k; i++)
    {
        if(arr[index][0] == 0)
        {
            index++;
        }

        if(arr[index][3] < arr[i][3] && arr[i][0]!=0)
        {
            index = i;
        }
    }
    cout<<index+1;

    return 0;
}
