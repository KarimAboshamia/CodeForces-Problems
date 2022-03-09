#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arrl[n];
    int arrr[n];
    for(int i = 0; i < n; i++)
    {
        int temp;
        int temp2;
        cin>>temp;
        cin>>temp2;
        arrl[i] = temp;
        arrr[i] = temp2;
    }
    int sum = 0;
    int lsum = 0;
    int rsum = 0;
    for(int i = 0; i < n;i++ )
    {
        lsum+= arrl[i];
        rsum+= arrr[i];
    }
    sum = abs(lsum - rsum);
    int templ;
    int tempr;
    int res = 0;
    int resIndex;
    for(int i = 0 ; i< n ;i++)
    {
        templ = lsum;
        tempr = rsum;
        templ -= arrl[i];
        templ += arrr[i];
        tempr -= arrr[i];
        tempr += arrl[i];
        int tempSum = abs(templ - tempr);
        if(tempSum > res)
        {
            res = tempSum;
            resIndex = i+1;
        }
    }
    if(sum < res){
        cout<<resIndex;
    }
    else
    {
        cout<<0;
    }

    return 0;
}
