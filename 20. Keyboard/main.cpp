#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char RL;
    cin>>RL;
    string wrongWord;
    cin>>wrongWord;
    string res = wrongWord;
    for(int i = 0;i < wrongWord.size();i++)
    {
        if(RL == 'R')
        {
            int temp = word.find(wrongWord[i]);
            res[i] = word[temp-1];
        }
        else
        {
            int temp = word.find(wrongWord[i]);
            res[i] = word[temp+1];
        }
    }
    cout<<res;
    return 0;
}
