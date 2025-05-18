//jha
//07-01-2025
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin>> n >> m >> a >> b;
    
    if(b/m>=a)
    {
      cout<<n*a;
    }
    else
    {
      int count{0};
      bool x{true};
      while(x)
      {
        if(n%m!=0)
        {
          n--;
          count++;
        }
        else
        {
          break;
        }
      }
      int a1=(count*a)+((n/m)*b);
      int a2=(n/m)*b+b;
      
      cout<<min(a1,a2);
      
    }
    return 0;
}