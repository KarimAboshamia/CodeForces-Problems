#include <iostream>

using namespace std;

int main()
{
    char arr[4][4];
    for(int i = 0 ; i< 4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            char temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }
    int xCounter = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(xCounter == 2 && arr[i][j+1] == '.' && j+1 < 4)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            if(arr[i][j] == 'x')
            {
                xCounter++;
            }
            else if(arr[i][j] == 'o')
            {
                xCounter = 0;
            }
            else if(xCounter == 1 && arr[i][j] == '.' && arr[i][j+1] =='x' && j+1 < 4 )
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    xCounter = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(xCounter == 2 && arr[i][j+1] == '.' && j+1 < 4)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            if(arr[j][i] == 'x')
            {
                xCounter++;
            }
            else if(arr[j][i] == 'o')
            {
                xCounter = 0;
            }
            else if(xCounter == 1 && arr[j][i] == '.' && arr[j+1][i] =='x' && j+1 < 4 )
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    return 0;
}
