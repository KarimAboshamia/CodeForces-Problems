#include <iostream>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int r1 = (s - (s%n)) / n;
        int r2 = a - (a-r1);
        int r3 = b - (b -(s % n));
        int result = r2*n + r3*1;
            if(result == s)
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
