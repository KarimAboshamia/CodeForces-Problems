#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    string s;
    cin>>s;
    for(int i = 0; i < m ;i++) {
        char temp;
        char temp2;
        cin>>temp;
        cin>>temp2;
        if(temp == temp2)
        {
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i] == temp)
            {
                s[i] = temp2;
            }
            else if(s[i] == temp2)
            {
                s[i] = temp;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
