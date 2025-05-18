//jha
//09-01-2025
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
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
      int a,b;
      cin>>a>>b;
      int p=min(a,b);
      p=min(p,(a+b)/3);
      cout<<p<<endl;
    }
    return 0;
}