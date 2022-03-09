#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(unsigned long long n, int data)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (unsigned long long p=2; p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (unsigned long long i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    int counter = 0;
    for (unsigned long long p=2; p<=n && counter < data; p++)
    {
        if (prime[p])
        {
            cout << p << " ";
            counter++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    SieveOfEratosthenes(10000000,n);
    return 0;
}
