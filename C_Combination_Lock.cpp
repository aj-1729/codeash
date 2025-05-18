// jha
// 31-03-2025
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
    while( t -- )
    {
        int n ; 
        //vector <int> ans (n) ; 
        cin >> n ; 
        if( n == 1 )
        {
            cout << 1 << endl ; 
            continue ;
        }
        if( n&1 )
        {
            int j = 1 ;
            for(int i = 1 ; i <=n ; i+=2 )
            {
                cout << i << " " ; 
            }
            j = 2 ;
            for(int i = 2  ; i < n ; i+=2 )
            {
                cout << i << " ";
            }
            //f(n) cout << ans[i] << " " ;
            cout <<  endl ;
        }
        else cout << -1 << endl ;
    } 
    
    
    return 0;
}