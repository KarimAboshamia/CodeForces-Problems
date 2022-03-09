#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue<int> arr;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push(temp);
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int temp = arr.front();
        int temp2 = arr.back();
        if (temp > temp2) {
            arr.push(temp);
            arr.pop();
            counter++;
        } else {
            break;
        }
    }
    while (arr.size()!=0)
    {
        int temp = arr.front();
        arr.pop();
        int temp2 = arr.front();
        if(temp > temp2)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<counter;
    return 0;
}
