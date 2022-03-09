#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string k;
    cin>>n;
    cin>>k;
    string num[n];
    for(int i = 0; i < n;i++)
    {
        string temp;
        cin>>temp;
        num[i] = temp;
    }

    return 0;
}
