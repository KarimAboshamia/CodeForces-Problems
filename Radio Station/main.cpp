#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    string name[n];
    string command[m];
    cin.ignore();
    for(int i = 0; i< n; i++)
    {
        string te;

        getline(cin, te);
        name[i] =  te;
    }
    for(int i = 0; i < m; i++)
    {
        string temp;
        getline(cin, temp);
        command[i] = temp;
    }
    for(int i = 0; i < m; i ++)
    {
        stringstream commandIP(command[i]);
        string commandName;
        string commandN;
        commandIP>>commandName;
        commandIP>>commandN;
        commandN.erase(commandN.size()-1);
        for(int j = 0; j< n; j++)
        {
            stringstream ss(name[j]);
            string name;
            string ip;
            ss>>name;
            ss>>ip;
            if(ip == commandN)
            {
                string result = command[i] + " #" + name;
                cout<<result<<endl;
                break;
            }
        }
    }
    return 0;
}
