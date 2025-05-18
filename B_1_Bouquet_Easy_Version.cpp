//jha
//09-02-2025
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
        vector<int> vec(n);
        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        }
        sort(all(vec));
        vector<int> res;
        for(int i{0} ; i<n-1 ; i++)
        {
            if((abs(vec[i+1]-vec[i])==0) || abs(vec[i+1]-vec[i])==1)
            {
                res.pb(vec[i]);
            }
            else
            {
                
            }
        }

    }
    return 0;
}