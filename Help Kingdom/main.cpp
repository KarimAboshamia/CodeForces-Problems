#include <iostream>
#include <string>
using namespace std;
int main() {
    string number;
    cin>>number;
    int indexOfDecimalPoint = -1;
    for(int i = 0; i < number.size();i++)
    {
        if(number[i] == '.')
        {
            indexOfDecimalPoint = i;
            break;
        }
    }
    bool isNegative = false;
    string fraction;
    if(number[0] == '-')
    {
        isNegative = true;
        if(indexOfDecimalPoint != -1)
        {
            fraction = number.substr(indexOfDecimalPoint+1, number.size());
        }

        number = number.substr(1,indexOfDecimalPoint-1);

    }
    else if(indexOfDecimalPoint != -1)
    {
        fraction = number.substr(indexOfDecimalPoint+1, number.size());
        number = number.substr(0,indexOfDecimalPoint);
    }
    if(number.size() > 3)
    {
        for(int i = number.size()-3; i > 0;i-=3)
        {
            number = number.substr(0,i) + ',' + number.substr(i,number.size()-i);
        }
    }
    if(fraction.size()>2)
    {
        fraction = fraction.substr(0,2);
    }
    else if(fraction.size() < 2)
    {
        while(fraction.size() < 2)
        {
            fraction+='0';
        }
    }
    if(isNegative)
    {
        cout<<"($"<<number<<'.'<<fraction<<')'<<endl;
    }
    else
    {
        cout<<'$'<<number<<'.'<<fraction<<endl;
    }
    return 0;
}
