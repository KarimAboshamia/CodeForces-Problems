#include <iostream>

using namespace std;

int main()
{
    int k;
    string s;
    cin>>k;
    cin>>s;
    string result = "";
    for(int i = 0 ; i<k; i+=2)
    {
        if(k%2==0)
        {
            if(i == k - 2)
            {
                result += s.substr(i,2);
            }
            else
            {
                result += s.substr(i,2)+ "-";
            }
        }
        else
        {
            if(i == k - 3)
            {
                result += s.substr(i,3);
                break;
            }
            else
            {
                result += s.substr(i,2)+ "-";
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
