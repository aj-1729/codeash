// jha
// 28-03-2025
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
    while(t--)
    {
        int n  , k  , q ; 
        cin >> n >> k >> q ; 
        vector <int> vec(n) ; 
        f(n) cin >> vec[i] ; 

        int ans = 0 ;

        int l = 0 , r = 0 , s = 0 ; 
        while ( r < n )
        {
            if(vec[r] <= q) 
            {
                s = r - l + 1 ;
                if(s >= k)
                {
                    int diff = s - k ; 
                    ans += (diff+1) ;
                }
            }
            else
            {
                l = r + 1 ; 
            }
            r++ ;
        }
        cout << ans << endl ;
    }
    
    
    
    return 0;
}