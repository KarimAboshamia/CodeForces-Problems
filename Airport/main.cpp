#include <iostream>
using namespace std;

int main()
{
    #define _ ios::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);

    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[m];
    int min[m];
    for(int i = 0;i < m;i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
        min[i] = temp;

    }
    int maxTotal = 0;
    int counter = 0;
    int minTemp = n;
    while(n!=0)
    {
        if(counter == m)
        {
            counter = 0;
        }
        if(arr[counter]>0)
        {
            maxTotal += arr[counter];
            arr[counter]--;
            n--;
            counter++;
        }
    }

    int minResult = 0;
    int counter2 = 0;
    while(minTemp !=0)
    {
        if(minTemp >= min[counter2])
        {
            minTemp -= min[counter2];
            minResult += (min[counter2]*(min[counter2]+1))/2;
            counter2++;
        }
        else
        {
            minTemp = 0;
            minResult += min[counter2];
        }
    }
    cout<<maxTotal<< " "<<minResult<<endl;
    return 0;
}