#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string num1, num2;
    int res[550];
    memset(res, 0,sizeof(res));
    while(cin>>num1)
    {
        cin>>num2;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i = 0 ; i < num1.length(); i++)
        {
            for(int k = 0; k < num2.length(); k ++)
            {
                res[i+k] = res[i+k] + ((num1[i]-'0')* (num2[k]-'0'));
            }
        }
        for(int i = 0; i < (num1.length() + num2.length()-2); i ++)
        {
            int temp = res[i] / 10;
            int temp2 = res[i] % 10;
            res[i] = temp2;
            res[i+1] += temp;
        }
        for(int i = (num1.length()+num2.length()-2); i >= 0; i--)
        {
            cout<<res[i];
        }
        memset(res, 0,sizeof(res));
    }
    return 0;
}
