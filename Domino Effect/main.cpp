#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string word;
    cin>>word;
    vector<char> v1;
    for(int i = 0; i < word.size();i++)
    {
        v1.push_back(word[i]);
    }
    int left = 0;
    int right = 0;
    for(int i = 0 ; i < v1.size() ;i++)
    {
        if(word[i] =='L')
        {
            v1.erase(v1.begin(), v1.begin()+i+1);
        }
        else if(word[i] == 'R')
        {
            for(int j = i; j < v1.size();j++)
            {
                if(v1[j] == 'L')
                {
                    right++;
                    break;
                }
                else
                {
                    right++;
                }
            }
            if(right % 2 != 0)
            {
                v1.erase(v1.begin()+i, v1.begin()+ right/2-1);
                v1.erase(v1.begin()+right/2, v1.begin()+right);
            }
        }
    }
    cout<<v1.size();
    return 0;
}
