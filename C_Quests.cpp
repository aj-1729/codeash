//jha
//17-03-2025
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
    int t ; 
    cin >> t ; 
    while(t--)
    {
        int n , k ; 
        cin >> n >> k ; 
        vector<int> veca(n+1) ; 
        vector<int> vecb(n+1) ;
        f1(n) cin >> veca[i] ;
        f1(n) cin >> vecb[i] ;
        int x = min ( n , k ) ;
        int sum = 0 , maxi = INT_MIN , fans = INT_MIN , ans = 0;
        for(int i = 1 ; i <=x ; i ++)
        {
            sum += veca[i] ;
            maxi = max(maxi , vecb[i]) ;
            int left = (k-i) * (maxi) ;
            ans = sum + left ;
            fans = max(fans , ans);

        }
        cout << fans << endl ;
    }
    return 0;
}