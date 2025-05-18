//jha
//20-03-2025
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
    int n , m ; 
    cin >> m >> n ;
    vector <int> vec(n) ; 
    f(n) cin >> vec[i] ;
    sort(all(vec)) ;
    int x = 0 ;
    int ans = INT_MAX ;
    while(x < n)
    {
        int e = 0 ;
        if((x+m-1) < n)
        {
            e = vec[x+m-1] - vec[x] ;
            ans = min ( e , ans ) ;
        }
        
        x ++ ;
    }
    cout << ans << endl ;
    return 0;
}