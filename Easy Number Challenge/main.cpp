#include <iostream>
#include <cmath>
using namespace std;
int printDivisors(int n)
{
    int counter = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                counter++;

            else // Otherwise print both
                counter+=2;
        }
    }
    return counter % 1073741824;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int answer = 0;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            for(int f = 1; f <= c; f++)
            {
                answer += printDivisors(i*j*f);
            }
        }
    }
    cout<<answer%1073741824;
    return 0;
}
