    #include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main() {
        int n,m;
        cin>>n>>m;
        vector<int>v1;
        vector<int>tempV;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        for(int i = 0; i < m; i++)
        {
            int l,r,x;
            cin>>l>>r>>x;
            int counter = 0;
            for(int j = l-1; j < r;j++)
            {
                if(v1[j]<v1[x-1])
                {
                    counter++;
                }
            }
            if(counter == x-l)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        return 0;
    }
