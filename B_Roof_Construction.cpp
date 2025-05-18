//jha
//05-05-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
#define f(n) for(int i = 0 ; i < n ; i ++)
#define f1(n) for(int i = 1 ; i <= n ; i++)
#define CY cout << "YES" << endl
#define CN cout << "NO" << endl
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t  ; 
    cin >> t ; 
    while( t-- )
    {
      int n ; 
      cin >> n ; 
      bool a = true ; 
      int maxi = 1 ;
      if(n == 2)
      {
        cout << 0 << " " << 1 << endl ;
        continue ; 
      }
      while (a)
      {
        if(maxi > (n-1))
        {
            break ; 
        }
        maxi = maxi << 1 ;
      }
      
      maxi /= 2 ;

      for(int i = 1 ; i < n ; i ++)
      {
        if(i == (maxi-1)) cout << i << " " << 0 << " " ;
        else cout << i << " " ; 
      }
      cout << endl ;
    }
    return 0;
}