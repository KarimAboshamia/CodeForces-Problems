#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    string s;
    string b;
    cin>>s;
    cin>>b;
    int counter = 0;
    int fres = b.size();
    for(int i = 0 ; i< b.size(); i++)
    {
        if(i + (s.size()) > b.size())
        {
            break;
        }
        else
        {
            for(int j = 0; j < s.size();j++)
            {
                if(s[j] != b[i+j])
                {
                    counter++;
                }
            }
        }
        if(fres > counter)
        {
            fres = counter;
        }
    }
    cout<<fres<<endl;
    return 0;
}
