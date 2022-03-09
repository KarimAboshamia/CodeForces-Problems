#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int arrRes[k];
    for(int i = 0;i<k;i++)
    {
        int m;
        cin>>m;
        int first,endEl;
        int A = 0;
        int B = 0;
        int counter = 0;
        for(int j= 0; j<m;j++)
        {
            char temp;
            cin>>temp;
            if(temp == 'A' && counter == 0)
            {
                first = j;
                counter++;
            }
            else if(temp == 'B' && A == 0)
            {
                A = 1;
            }
            else if(temp == 'C' && B == 0)
            {
                B = 1;
            }
            else if(temp == 'Z' && counter == 1)
            {
                endEl = j;
                break;
            }
        }
        arrRes[i] = endEl - first + 1;
    }
    for(int i = 0; i < k;i++)
    {
        cout<<arrRes[i]<<endl;
    }
    return 0;
}
