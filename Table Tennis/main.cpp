#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    long long k;
    cin >> n;
    cin >> k;
    vector<int> players;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        players.push_back(temp);
    }
    int index = 0;
    long long win = k;
    if(k >= n)
    {
        sort(players.begin(),players.end(),greater<int>());
        cout<<players[0];
        return 0;
    }
    while(true)
    {
        if(players[0] > players[1])
        {
            players.push_back(players[1]);
            players.erase(players.begin()+1);
            win--;
        }
        else if(players[0] < players[1])
        {
            players.push_back(players[0]);
            players.erase(players.begin()+0);
            win = k-1;
        }
        if(win == 0)
        {
            cout<<players[0];
            return 0;
        }
    }
    return 0;
}
