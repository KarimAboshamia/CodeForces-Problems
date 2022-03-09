#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <int, greater<int>> s1;
    string setWord;
    getline(cin, setWord);
    for(int i = 1 ; i < setWord.size()-1;i+=3)
    {
        s1.insert(setWord[i]);
    }
    cout<<s1.size();

    return 0;
}
