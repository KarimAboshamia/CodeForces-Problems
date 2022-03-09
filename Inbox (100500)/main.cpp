#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int movements = 0;
    int pos1 = s.find("1");
    int pos2 = 0;
    bool first = true;
    int counter = s.find("1");
    while(counter != string::npos)
    {
        if(first == true)
        {
            movements += 1;
            first = false;
            counter = s.find("1", pos1+1);
        }
        else
        {
            pos2 = s.find("1",pos1+1);
            if(abs(pos1 - pos2) == 4)
            {
                movements+= 2;
            }
            else if(abs(pos1-pos2) < 4)
            {
                movements+=1;
            }
            else
            {
                movements+=2;
            }
            pos1 = s.find("1",pos2);
            counter = s.find("1", pos2+1);
        }
    }
    cout<<movements<<endl;
    return 0;
}
