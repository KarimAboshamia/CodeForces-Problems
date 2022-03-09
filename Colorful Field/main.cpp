#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<vector<char> > veg(n, vector<char>(m, '1'));
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        veg[a - 1][b - 1] = '0';
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            if(veg[i][j] == '1' && counter == 0)
            {
                veg[i][j] = 'C';
                counter++;
            }
            else if(veg[i][j] == '1' && counter == 1)
            {
                veg[i][j] = 'K';
                counter++;
            }
            else if(veg[i][j] == '1' && counter == 2)
            {
                veg[i][j] = 'G';
                counter = 0;
            }
        }
    }
    for(int f = 0; f < t;f++)
    {
        int i, j;
        cin>>i>>j;
        if(veg[i-1][j-1] == '0')
        {
            cout<<"Waste"<<endl;
        }
        else if(veg[i-1][j-1] == 'C')
        {
            cout<<"Carrots"<<endl;
        }
        else if(veg[i-1][j-1] == 'K')
        {
            cout<<"Kiwis"<<endl;
        }
        else if(veg[i-1][j-1] == 'G')
        {
            cout<<"Grapes"<<endl;
        }
    }
    return 0;
}
