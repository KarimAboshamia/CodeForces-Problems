#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1)
    {
        cin>>s2;


        int arr[600];
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        memset(arr, 0, sizeof(arr));
        for(int i = 0 ; i < s1.length(); i++)
        {
            for(int j= 0; j<s2.length(); j++)
            {
                arr[i+j] +=  (int(s1[i]) - 48) * (int(s2[j])-48);
            }
        }
        for(int i = 0 ; i < 600-1; i++)
        {
            arr[i+1] += arr[i] / 10;
            arr[i] = arr[i] %10;
        }
        int i = 599;
        for(; i > 0 && arr[i] == 0; i--)
        {
        }
        for(; i>=0; i--)
        {
            cout<<arr[i];
        }
	cout<<endl;

    }
    return 0;
}
