#include <iostream>
using namespace std;
int main() {
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int n;
    cin>>n;
    int arr2[n];
    int leapCounter = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr2[i];
        if(arr2[i] == 29)
        {
            arr2[i] = 28;
            leapCounter++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 12;j++)
        {
            if(arr2[i] == arr[j])
            {
                int temp = i+1;
                int temp2 = j+1;
                int counter = 1;
                while(temp < n)
                {
                    if(temp2 == 12)
                    {
                        temp2 = 0;
                    }
                    if(arr2[temp] == arr[temp2])
                    {
                        temp++;
                        temp2++;
                        counter++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(counter == n && leapCounter < 2)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
