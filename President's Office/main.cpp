#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    char office;
    cin>>office;
    char arr[n][m];
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < m;j++)
        {
            char temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }
    set <char> colours;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < m;j++)
        {
            if(arr[i][j] == office)
            {
                if(arr[i+1][j]!= '.' && arr[i+1][j]!= office && i+1 < n)
                {
                    colours.insert(arr[i+1][j]);
                }
                if(arr[i-1][j]!= '.' && arr[i-1][j]!= office && i-1 >= 0)
                {
                    colours.insert(arr[i-1][j]);
                }
                if(arr[i][j+1]!= '.' && arr[i][j+1]!= office && j+1 < m)
                {
                    colours.insert(arr[i][j+1]);
                }
                if(arr[i][j-1]!= '.'  && arr[i][j-1]!= office && j-1>=0)
                {
                    colours.insert(arr[i][j-1]);
                }
            }
        }
    }
    cout<<colours.size();


    return 0;
}
