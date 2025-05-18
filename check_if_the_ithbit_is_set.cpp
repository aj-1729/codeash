//jha
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // int n,k;
    // cin>>n>>k;
    // if((n & (1 << k))!=0) cout<<"set";
    // else cout<<" notset";
    int n,k;
    cin>>n>>k;
    if((n>>k)%2==0) cout<<"not set";
    else cout<<"set";
    return 0;

}