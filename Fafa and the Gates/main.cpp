#include <iostream>
#include <queue>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    string numOfMov;
    cin>>numOfMov;
    int movs=0;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        movs += (numOfMov[i]=='U'? 1:-1);
        if(movs == 0 && numOfMov[i] == numOfMov[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
