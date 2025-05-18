//jha
//08-01-2025
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
      int x,y,k;
      cin>>x>>y>>k;
      int a,b;
      if(x%k!=0)
      {
        a=(x/k)+1;
      }
      else
      {
        a=(x/k);
      }
      if(y%k!=0)
      {
        b=(y/k)+1;
      }
      else
      {
        b=(y/k);
      }
      
      if(b>=a)
      {
        cout<<(2*a)+(2*(b-a))<<endl;
      }
      else
      {
        cout<<(2*b)+(2*(a-b))-1<<endl;
      }
    }
    return 0;
}