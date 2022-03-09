#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int>complexities;
    vector<int>problems;
    for(int i = 0; i < n;i++)
    {
        int temp;
        cin>>temp;
        complexities.push_back(temp);
    }
    for(int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        problems.push_back(temp);
    }
    int loop1 = m;
    int loop2 = n;
    int counter = 0;
    for(int i = 0; i < loop1;i++)
    {
        for(int j = 0; j < loop2;)
        {
            if(complexities[j] == problems[i])
            {
                complexities.erase(complexities.begin()+j);
                problems.erase(problems.begin()+i);
                i = 0;
                j = 0;
                loop1--;
                loop2--;
                counter++;
            }
            else
            {
                j++;
            }
        }
    }

    for(int i = 0; i < problems.size();i++)
    {
        if(counter == n)
        {
            cout<<0;
            return 0;
        }
        for(int j = 0; j < complexities.size();j++)
        {
            if(problems[i] > complexities[j])
            {
                counter++;
                complexities.erase(complexities.begin()+j);
                break;
            }
        }
    }
    int temp = n - counter;
    int result = abs(temp);
    cout<<result;
    return 0;
}
