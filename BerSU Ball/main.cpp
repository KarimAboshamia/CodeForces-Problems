#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arrB[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arrB[i];
    }
    int m;
    cin>>m;
    int arrG[m];
    for(int i = 0; i < m; i++)
    {
        cin>>arrG[i];
    }
    sort(arrB,arrB+n);
    sort(arrG, arrG+m);
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(abs(arrB[i]- arrG[j]) <= 1 && arrB[i] < 150 && arrG[j] < 150)
            {
                counter++;
                arrB[i] = 150;
                arrG[j] = 150;
            }
        }
    }
    cout<<counter;
    return 0;
}
