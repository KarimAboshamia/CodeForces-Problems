#include <iostream>
using namespace std;
int main() {
    int princess,dragon,timeBeforeEscape,timeToGetBack, miles;
    cin>>princess>>dragon>>timeBeforeEscape>>timeToGetBack>>miles;
    int timeNeeded = miles / princess  - timeBeforeEscape;
    if(timeNeeded == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        int speedDiff = abs(princess - dragon);

    }
    return 0;
}
