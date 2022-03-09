#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int,int>m1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(m1.find(temp)!= m1.end())
        {
            m1[temp]++;
        }
        else
        {
            m1.insert(make_pair(temp,1));
        }
    }
    map<int,int>::iterator m = m1.begin();
    while (m!=m1.end())
    {
        if(m->second %2 != 0)
        {
            cout<<"Conan"<<endl;
            return 0;
        }
        m++;
    }
    cout<<"Agasa"<<endl;
    return 0;
}
