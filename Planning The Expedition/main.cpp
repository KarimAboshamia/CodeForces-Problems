#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    int b;
    cin>>n;
    cin>>b;
    map<int,int>food;
    for(int i = 0; i < b; i++)
    {
        int temp;
        cin>>temp;
        if(food.find(temp) == food.end())
        {
            food.insert(make_pair(temp,1));
        }
        else
        {
            food[temp]++;
        }
    }

    return 0;
}
