#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i < 7 && n != 0;)
    {
        if(i == 0)
        {
            cout<<'R';
            i++;
        }
        else if(i == 1)
        {
            cout<<'O';
            i++;
        }
        else if(i == 2)
        {

            cout<<'Y';
            i++;
        }
        else if(i == 3)
        {

            cout<<'G';
            i++;
        }
        else if(i == 4)
        {
            cout<<'B';
            i++;
        }
        else if(i == 5)
        {

            cout<<'I';
            i++;
        }
        else if(i == 6)
        {
            cout<<'V';
            i = 0;
        }
        n--;
    }// ROYGBIVG != ROYGBIVR
    return 0;
}
