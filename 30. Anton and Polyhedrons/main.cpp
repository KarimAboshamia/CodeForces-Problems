#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int res=0;
    for(int i = 0; i < k;i++)
    {
        string ans;
        cin>>ans;
        if(ans == "Tetrahedron")
        {
            res += 4;
        }
        else if(ans == "Cube")
        {
            res += 6;
        }
        else if(ans == "Octahedron")
        {
            res+=8;
        }
        else if(ans == "Dodecahedron")
        {
            res+=12;
        }
        else if(ans == "Icosahedron")
        {
            res+=20;
        }
    }
    cout<<res;
    return 0;
}
