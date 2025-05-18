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
    cin >> t; 
    while(t--)
    {
        int n , k ; 
        cin >> n >> k ;
        int x = 0 ;
        int count = 1 ;
        if(n <= k) cout << count <<endl;
        else
        {
            if( n%2 != 0)
            {
                x = n - k ;
                count += x/(k-1) ;
                if(x % (k-1) == 0) cout << count << endl ;
                else cout << count + 1 <<endl ;
            }
            else
            {
                count = 0 ;
                if(n % (k-1) == 0) cout << n / (k-1) << endl ;
                else cout << (n / (k-1) ) +1  << endl ;
            }
        }
    }
    return 0;
}