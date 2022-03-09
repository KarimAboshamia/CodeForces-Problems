#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 0; i < t;i++)
    {
        int n;
        cin>>n;
        int totalCand = 0;
        int halfs = 0;
        for(int i = 0; i < n ; i++)
        {
            int temp;
            cin>>temp;
            if(temp == 2)
            {
                totalCand += 2;
            }
            else
            {
                totalCand += 1;
                halfs += 1;
            }
        }
        if(totalCand % 2 == 0 && (n % 2 == 0 || (n % 2 == 1 && halfs % 2 == 0 && halfs != 0)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
