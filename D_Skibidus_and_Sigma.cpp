//jha
//10-02-2024
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> vec(n,vector<int> (m));
        for(int i{0} ; i<n ; i++)
        {
            for(int j{0} ; j<m ; j++)
            {
                cin>>vec[i][j];
            }
        }
        //map<int,int> mpp;
        vector<pair<int,int>> vecf;
        int sum=0;
        for(int i{0} ; i<n ; i++)
        {
            sum=0;
            for(int j{0} ; j<m ; j++)
            {
                sum+=vec[i][j];
            }
            vecf.push_back({sum,i});
        }
        vector<vector<int>> vecf2(n,vector<int> (m));
        sort(vecf.rbegin(), vecf.rend());
        for(int i{0} ; i<n ; i++)
        {
            vecf2[i]=vec[vecf[i].second];
        }
        sum=0;
        //vector<int> res;
        int total{0};
        for(int i{0} ; i<n ; i++)
        {
            for(int j{0} ; j<m ; j++)
            {
                sum+=vecf2[i][j];
                total+=sum;

            }
        }
        cout<<total<<endl;



    }
    return 0;
}