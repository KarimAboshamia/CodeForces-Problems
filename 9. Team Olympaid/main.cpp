#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numOfTeams;
    cin>> numOfTeams;
    int arrOfIndex[3][numOfTeams];
    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    for(int i = 0; i < numOfTeams; i++)
    {
        int k;
        cin>>k;
        if(k == 1)
        {
            arrOfIndex[0][oneCount] = i+1;
            oneCount++;
        }
        else if(k == 2)
        {
            arrOfIndex[1][twoCount] = i+1;
            twoCount++;
        }
        else if(k == 3)
        {
            arrOfIndex[2][threeCount] = i+1;
            threeCount++;
        }
    }
    int minNum = min(threeCount,min(oneCount,twoCount));
    if(minNum == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<minNum<<endl;
    for(int i = 0; i < minNum;i++)
    {

        cout<<arrOfIndex[0][i]<<" "<< arrOfIndex[1][i]<<" "<< arrOfIndex[2][i];
        cout<<endl;
    }


    return 0;
}
