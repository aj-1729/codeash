//jha
//05-02-2024
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
        int n,k;
        cin>>n>>k;
        vector<vector<char>> vec(n,vector<char> (n));
        //vector<int> res;
        for(int i{0} ; i<n ; i++)
        {
            for(int j{0} ; j<n ; j++)
            {
                cin>>vec[i][j];
            }
        }
        for(int i{0} ; i<n ; i+=k)
        {
            for(int j{0} ; j<n ; j+=k)
            {
                cout<<vec[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}