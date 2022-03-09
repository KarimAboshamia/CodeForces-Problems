#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float percentage = 0;
    for(int i = 0; i< n;i++)
    {
        float temp;
        cin>>temp;
        percentage += 1.0/(100/temp);
    }
    cout<<(percentage/n) * 100<<endl;
    return 0;
}
