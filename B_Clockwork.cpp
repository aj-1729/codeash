//jha
//29-01-2025
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
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        }
        vector<int> res;
        int x;
        for(int i{0} ; i<(n/2) ; i++)
        {
            x=min(vec[i],vec[(n-1)-i]);
            res.pb(x);
        }
        if(n%2==1) res.pb(vec[n/2]);
        bool flag{true};
        for(int i{0} ; i<res.size() ; i++)
        {
            if(res[i]<=2*(n-(i+1)))
            {
                flag=false;
                break;
            }
        }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}