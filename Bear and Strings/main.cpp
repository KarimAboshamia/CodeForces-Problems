#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string n;
    cin>>n;
    string sub = "bear";
    int counter = 0;
    int s = n.size();
    for(int i = 0; i < n.size();i++)
    {
        int t = n.find(sub,i);
        if(t != string::npos)
        {
            counter+= abs(s - (t + 3));
        }
    }
    cout<<counter<<endl;
    return 0;
}
