//jha
//19-03-2025
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
        int n ; 
        cin >> n ;
        vector <int> vec(n+1) ;
        f1(n) cin >> vec[i] ;
        vector <int> ps(n+1) ;
        int sum = 0 ;
        vector <int> du(n+1) ;
        du = vec ;
        sort(all(du)) ;
        
        f1(n)
        {
            sum += du[i] ;
            ps[i] = sum ;
        }
        for( int i = (n) ; i >= 1 ; i--)
        {
            int ans = 0 ;
            ans = i - 1 ;
            int curr_sum = ps[i] ;
            //bool a = true ;
            int r = i + 1 ;
            while(r <= n)
            {
                if(curr_sum <= du[r])
                {
                    curr_sum += du[r] ;
                    ans ++ ;
                }
                else break ;
                r++;
            }
            cout << ans << " " ;
        }
        cout << endl ;
        
        
        
    }
    return 0;
}