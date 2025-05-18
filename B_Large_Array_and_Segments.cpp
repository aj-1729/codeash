// jha
// 04-04-2025
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
    while ( t -- )
    {
        int n , k , x ; 
        cin >> n >> k >> x ; 

        vector <int> vec(n) ; 
        f(n) cin >> vec[i] ; 

        int sum = accumulate(all(vec)) ; 
        int ans = 0 ; 

        if(sum >= x)
        {
            ans = ( k - 1 ) * n ; 
            int dsum = sum ; 
            f(n)
            {
                if(dsum >= vec[i]) ans ++ ; 
                dsum -= vec[i]
            }
        }
        else if( sum*k < x ) ans = 0 ; 
        else if( sum*k == x) ans = 1 ;
        else
        {
             
        }

    }
    
    
    return 0;
}