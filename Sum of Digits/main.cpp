#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    cin>>num;
    long long counter = 0;
    long long res = 0;
    if(num.size() == 1 && (num[0]-48)==0)
    {
        cout<<0<<endl;
        return 0;
    }

    while(true)
    {
        for(int i = 0; i < num.size(); i++)
        {
            counter+= (num[i]-48);
        }
        if(counter < 10)
        {
            res++;
            break;
        }
        else
        {
            res++;
            num = to_string(counter);
            counter = 0;
        }
    }

    cout<<res<<endl;
    return 0;
}
