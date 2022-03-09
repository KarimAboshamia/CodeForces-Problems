#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int b=0,s=0,c=0;
    string sand;
    cin>>sand;
    for(int i = 0; i < sand.size();i++)
    {
        if(sand[i] == 'B')
        {
            b++;
        }
        else if(sand[i] == 'S')
        {
            s++;
        }
        else
        {
            c++;
        }
    }

    return 0;
}
