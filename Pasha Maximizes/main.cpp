#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int k;
    cin>>a;
    cin>>k;
    int index;
    int sizeofA = a.size();
    if(k == 0)
    {
        cout<<a;
        return 0;
    }
    for(int i = 0; i < a.size();)
    {
        for(int j = 0; j < sizeofA ;j++)
        {
            if(a[i] < a[j])
            {
                index = j;
            }
        }
        if(index <= k)
        {
            for(int temp = index; temp >0; temp--)
            {
                swap(a[temp],a[temp-1]);
            }
            k = k - index;
            if(k <= 0)
            {
                break;
            }
            i++;
            sizeofA = a.size();
        }
        else
        {
            sizeofA--;
        }
    }
    cout<<a<<endl;
    return 0;
}
