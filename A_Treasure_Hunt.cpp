// jha
// 01-04-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t ; 
    cin >> t ; 
    while( t-- )
    {
        int x , y , k ; 
        cin >> x >> y >> k ;

        if(k < (x+y)) 
        {
            if( k < x ) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
        else if( k > (x+y))
        {
            int r = k % (x+y) ;
            if( r < x ) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
        else cout << "NO" << endl ;
    }
    
    return 0;
}