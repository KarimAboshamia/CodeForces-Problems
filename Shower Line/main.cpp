#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[5] = {0,1,2,3,4};
    int hap[5][5];
    for(int i = 0; i < 5 ;i++)
    {
        for(int j = 0; j < 5;j++)
        {
            cin>>hap[i][j];
        }
    }
    int res = 0;
    do
    {
        int temp = ( hap[arr[0]][arr[1]] + hap[arr[1]][arr[0]] + hap[arr[2]][arr[3]] + hap[arr[3]][arr[2]] )
                    +( hap[arr[1]][arr[2]] + hap[arr[2]][arr[1]] + hap[arr[3]][arr[4]] + hap[arr[4]][arr[3]] )
                    +( hap[arr[2]][arr[3]] + hap[arr[3]][arr[2]] )
                    +( hap[arr[3]][arr[4]] + hap[arr[4]][arr[3]] );

        if(temp > res)
        {
            res = temp;
        }

    }while(next_permutation(arr,arr+5));
    cout<<res;

    return 0;
}
