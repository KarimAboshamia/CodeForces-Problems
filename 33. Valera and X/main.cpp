#include <iostream>
#include <set>
using namespace std;

int main()
{
    int k;
    cin>>k;
    char arr[k][k];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < k; j++)
        {
            char letter;
            cin>>letter;
            arr[i][j] = letter;

        }
    }

    int counter = 0;
    char s1 = arr[0][0];
    char s2 = arr[0][1];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < k;j++)
        {
            if(i == j)
            {
                if(s1 != arr[i][j])
                {
                    cout<<"NO";
                    return 0;
                }
            }

            else if(i == k-j-1)
            {
                if(s1 != arr[i][j])
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
            {
                if(s2 != arr[i][j])
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    if(s1 == s2)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
