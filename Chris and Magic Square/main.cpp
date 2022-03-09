#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    int row,column;

    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            matrix[i][j] = temp;
            if(temp == 0)
            {
                row = i;
                column = j;
            }
        }
    }
    if(n == 1)
    {
        cout<<1;
        return 0;
    }
    int uknown = 0;
    int known = 0;
    for(int j = 0; j < n; j++)
    {
        uknown += matrix[j][column];

    }
    for(int j = 0; j < n;j++)
    {
        known+= matrix[j][(n-column-1)/2];
    }
    int num = known - uknown;
    matrix[row][column] = num;
    int sum =0;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
        {
            sum+= matrix[i][j];
            sum+= matrix[j][i];
            if(i == j)
            {
                sum += matrix[i][j];
            }
        }
        sum+= matrix[i][n-i-1];
    }
    if(sum / known == (n*2)+2 && known != uknown)
    {
        cout<<num;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
