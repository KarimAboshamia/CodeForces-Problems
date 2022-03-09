#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = 0;
    int digits = 1;
    int mod = 10;
    int i = 1;
    int numbers = 0;
    int prevNumbers = 0;
    for(;i <= n; i++) {
        if (i % mod == 0) {
            numbers = abs(i - 1 - prevNumbers);
            result +=  numbers * digits;
            digits++;
            mod *= mod;
            prevNumbers += numbers;
        }
    }
    numbers = abs(i - 1 - prevNumbers);
    result += numbers * digits;

    cout<<result<<endl;
    return 0;
}
