//jha
//16-02-2025
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
        string s;
        cin>>s;
        int count=0;
        if(s[0]=='1') count++;
        for(int i{0} ; i<n-1 ; i++)
        {
            if(s[i]!=s[i+1]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}