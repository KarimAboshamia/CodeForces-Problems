#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%4 != 0)
    {
        cout<<"==="<<endl;
    }
    else
    {
        int A = 0;
        int C = 0;
        int G = 0;
        int T = 0;
        int Q = 0;
        for(int i = 0; i < n; i ++) {
            if (s[i] == 'A') {
                A++;
            } else if (s[i] == 'C') {
                C++;
            } else if (s[i] == 'G') {
                G++;
            } else if (s[i] == 'T') {
                T++;
            } else {
                Q++;
            }
        }
        int arr[4] = {A,C,G,T};
        for(int i = 0 ; i < 4;i++)
        {
            while(arr[i] != n/4)
            {
                if(Q!=0)
                {
                    int index = s.find('?');
                    arr[i]++;
                    Q--;
                    if(i == 0)
                    {
                        s[index] = 'A';
                    }
                    else if(i == 1)
                    {
                        s[index] = 'C';
                    }
                    else if(i == 2)
                    {
                        s[index] = 'G';
                    }
                    else if(i == 3)
                    {
                        s[index] = 'T';
                    }
                }
                else
                {
                    break;
                }
            }
        }
        for(int i = 0; i < 4;i++)
        {
            if(arr[i] != n/4)
            {
                cout<<"==="<<endl;
                return 0;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
