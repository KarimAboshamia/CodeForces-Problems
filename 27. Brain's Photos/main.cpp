#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    char arr[n][m];
    for(int i = 0 ; i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            char col;
            cin>>col;
            arr[i][j] = col;
        }
    }
    for(int i = 0 ; i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            if(arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] !='G')
            {
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}
