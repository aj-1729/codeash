//jha
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
        if(n==1) cout<<0<<endl;
        else
        {
            for(int i{0}; i<n-1  ; i++)
            {
                cout<<0;
            }
            cout<<1<<endl;
        }
    }
    return 0;
}