#include <iostream>
#include <bitset>
#include <sstream>
#include <cmath>
using namespace std;

string res1 = "";
string res2 = "";
void decToBinary(int n)
{
    res1 = "";
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        res1 += to_string(binaryNum[j]);
    for(int j = i-1; j>=0;j--)
    {
        if(binaryNum[j] == 0)
        {
            res2+= to_string(1);
        }
        else
            res2+= to_string(0);
    }
}





unsigned long long binaryToDecimal(unsigned long long n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    int a,b;
    cin>>a>>b;
    decToBinary(a);
    string num1 = res1;
    string num1Comp = res2;
    decToBinary(b);
    string num2 = res1;
    stringstream geek(num1);
    stringstream geek2(num1Comp);
    stringstream geek3(num2);
    unsigned long long num1Int = 0;
    unsigned long long num1IntComp = 0;
    unsigned long long num2Int = 0;
    geek>>num1Int;
    geek2>>num1IntComp;
    geek3>>num2Int;


    num1IntComp = binaryToDecimal(num1IntComp);
    if(num2.size()>num1.size())
    {
        int fres = a ^ b;
        cout<<fres;
    }
    else
    {
        int fres = a ^ num1IntComp;
        cout<<fres<<endl;
    }
    return 0;
}