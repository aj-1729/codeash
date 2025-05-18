// jha
// 27-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42

bool comp(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first ;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t ; 
    while(t--)
    {
      int n , k ; 
      cin >> n >> k  ;
      vector <int> vec (n) ; 
      f(n) cin >> vec[i] ; 
      
      vector <int> mod (n) ;
      
      f(n) mod[i] = vec[i] % k ;
      
      vector <int> ans (n) ; 
      int j = 0 ;
      f(n)
      {
        if( mod[i] == 0 ) 
        {
          cout << i+1 << " " ;
        }
      }
      
      vector <pair < int,int > > ps(n) ;
      
      f(n)
      {
        ps[i].first = mod[i] ;
        ps[i].second = (i+1) ;
      }
      stable_sort(all(ps) , comp) ; 
      
      // f(n) 
      // {
      //   cout << ps[i].first << " " << ps[i].second << endl  ;
        
      // }
      f(n)
      {
        if(ps[i].first != 0) cout << ps[i].second << " " ;
      }
      cout << endl ;
      
    }
    
    
    return 0;
}