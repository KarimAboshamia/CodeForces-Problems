#include <iostream>
#include <sstream>


using namespace std;

int main()
{
    string sum;
    getline(cin,sum);
    int arr[sum.size()/2];
    int coun = 0;
    for(int i = 0; i < sum.size(); i++)
    {
        stringstream geek(sum);
        int x = 0;
        geek>>x;
        if(i % 2 == 0)
        {
            arr[coun] = x[i];
            coun++;
        }

    }
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr + n);
	cout<<arr[0]<<endl;
    return 0;
}
