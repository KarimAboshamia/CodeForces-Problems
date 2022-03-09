#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    string arr1[m];
    string arr2[m];
    for(int i = 0; i < m; i++)
    {
        string temp;
        string temp2;
        cin>>temp;
        cin>>temp2;
        arr1[i] = temp;
        arr2[i] = temp2;
    }
    string arrLec[n];
    for(int i = 0; i < n;i++)
    {
        string temp;
        cin>>temp;
        arrLec[i] = temp;
    }
    string res = "";
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            if(arr1[j] == arrLec[i])
            {
                if(arr1[j] > arr2[j])
                {
                    res += " " + arr2[j];
                }
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
