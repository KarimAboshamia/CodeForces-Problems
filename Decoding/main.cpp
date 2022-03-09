#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result = "";
    int temp = n;
    for(int i = 0; i < temp;i++)
    {
        if(n % 2 == 0)
        {
            int median = (n / 2);
            result+= s[median];
            s.erase(median-1, median);
            n--;
        }
        else
        {
            int median = n / 2;
            result += s[median];
            s.erase(median-1, median);
            n--;
        }
    }
    cout<<result;
    return 0;
}
