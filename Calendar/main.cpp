#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int y, m, d, y2, m2, d2;

    char ch;
    string date;
    cin>>date;
    stringstream ss(date);
    ss>>y>>ch>>m>>ch>>d;
    cin>>date;
    stringstream s2(date);
    s2>>y2>>ch>>m2>>ch>>d2;
    int days = 0;
    if(m == 12 && d == 31)
    {
        y++;
    }
    if(m2 == 12 && d2 == 31)
    {
        y2++;
    }
    while(y < y2)
    {
        if((y%100 == 0 && y% 400 == 0) || (y% 100 != 0 && y%4 ==0))
        {
            days+= 366;
        }
        else
        {
            days+=
                    365;
        }
        y++;
    }
    cout<<days<<endl;
    cout<<y2<<endl;
    return 0;
}
