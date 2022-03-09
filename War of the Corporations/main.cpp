#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    string b;
    cin>>s;
    cin>>b;
    int found = 0;
    int counter = 0;
    int result = 0;
    while(found != string::npos)
    {
        found = s.find(b,counter);
        counter =b.size() + found;
        if(found != -1)
        {
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}
