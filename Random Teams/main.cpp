#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, m;
    cin>>n;
    cin>>m;
    //case 1 max team
    long long maxTeam = (n - (m-1))* (n-(m-1) - 1) / 2;
    //case 2 min teams
    long long minTeams = ceil((double)n/m);
    long long minCorner = n % m;
    long long preMin = (minTeams * (minTeams - 1) /2);
    long long preMin2 = ((minTeams-1) * (minTeams-2)/2);
    long long minTeam;
    if(minCorner == 0)
    {
        minTeam = preMin * m;
    }
    else
    {
        minTeam = preMin * minCorner + preMin2 * (m-minCorner);
    }
    cout<<minTeam<<" "<<maxTeam;
    return 0;
}
