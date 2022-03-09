#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> split(const char *str)
    {
        string c = "WUB";
        vector<string> result;

        do
        {
            const char *begin = str;

            while(*str != c && *str)
                str++;

            result.push_back(string(begin, str));
        } while (0 != *str++);
        return result;
    }
    string word;
    cin>>word;
    split(word);

    return 0;
}
