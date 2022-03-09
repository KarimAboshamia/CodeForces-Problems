#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string word;
    cin>>word;
    vector <int> v1;
    int temp;
    for(int i = 0 ; i< word.size(); i+=2)
    {
        temp = int(word[i]) - 48;
        v1.push_back(int(word[i]) - 48);
    }
    sort(v1.begin(),v1.end());
    for(int i = 0 ; i < v1.size() ;i++)
    {
        if(i == v1.size()-1)
        {
            cout<<v1[i];
            break;
        }
        cout<<v1[i] << "+";
    }
    return 0;
}
