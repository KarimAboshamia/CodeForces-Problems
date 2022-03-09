#include <iostream>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream myfile("input.txt");
    string s;
    string b;
    int n;
    int m;
    getline(myfile, s, ' ');
    getline(myfile, b, '\n');
    istringstream iss(s);
    iss>>n;
    istringstream iss2(b);
    iss2>>m;
    string line;
    getline(myfile, line);
    istringstream os(line);
    int lights;
    vector<int> light;
    while(os>>lights)
    {
        light.push_back(lights);
    }
    vector<int> temp;
    temp = light;
    sort(temp.begin(), temp.end());
    int num = temp[n-m];
    int index = 0;
    string ans = "";
    for(int i = 0 ; i < n && m!=0;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(light[index] <= light[j])
            {
                index = j;
            }
        }
        ans+= " " + to_string(index+1);
        light[index] = 0;
        index = 0;
        m--;
    }
    ans.erase(0,1);
    sort(temp.begin(), temp.end());
    ofstream outFile;
    outFile.open("output.txt");
    outFile<<num<<endl;
    outFile<<ans;


    return 0;
}
