#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numbOfCakes;
    int timeForCakes;
    int cakesNumber;
    int timeForSecondOven;
    cin>> numbOfCakes;
    cin>> timeForCakes;
    cin>> cakesNumber;
    cin>> timeForSecondOven;
    int numberOfGroups = (numbOfCakes + cakesNumber-1) / cakesNumber;
    int o1 = 0;
    int o2 = timeForSecondOven;
    for(int i = 0 ; i < numberOfGroups ; i++)
    {
        if(o1 <= o2)
        {
            o1+= timeForCakes;
        }
        else
        {
            o2+= timeForCakes;
        }

    }
    if(max(o1,o2)< numberOfGroups*timeForCakes)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
