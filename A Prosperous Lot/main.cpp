#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n > 36)
    {
        cout<<-1<<endl;
        return 0;
    }
    string res = "";
    while(n!=0)
    {
        if(n%2 != 0)
        {
            res+='4';
            n-= (n%2);
        }
        else
        {
            res+='8';
            n-=2;
        }
    }
    cout<<res<<endl;
    return 0;
}
