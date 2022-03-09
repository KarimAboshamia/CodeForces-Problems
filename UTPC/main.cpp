#include <iostream>
using namespace std;
int main() {
    int coins;
    cin>>coins;
    int bronze = 0;
    int silver = 0;
    int gold = 0;
    for(int i = 0; i < coins;i++) {
        string givenCoin;
        cin >> givenCoin;
        if (givenCoin == "bronze") {
            bronze++;
        } else if (givenCoin == "silver" && bronze >= 1) {
            bronze -= 1;
            silver += 1;
        }
        else if (givenCoin == "gold" && bronze >= 1 && silver >= 1){
            bronze -= 1;
            silver -= 1;
            gold++;
        }
        else if (givenCoin == "gold" && (bronze >= 3))
        {
            bronze -= 3;
            gold++;
        }

        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}