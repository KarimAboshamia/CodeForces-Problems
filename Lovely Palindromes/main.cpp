#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string n;
    cin>>n;
    string b = n;
    reverse(n.begin(),n.end());
    b += n;
    cout<<b;
    return 0;
}
