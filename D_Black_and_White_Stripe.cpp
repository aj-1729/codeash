// jha
// 02-04-2025
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
        int n , k ; 
        cin >> n >> k ;
        string s ; 
        cin >> s ; 

        int l = 0 , r = 0 ; 
        int countb = 0 , countw = 0 ; 
        while( r < n )
        {
            if(s[r] == 'B') 
            {
                countb ++ ;
            }
            else countw ++ ;
            if((countb + countw) == k) 
            {
                ans = countw ;
                break ;
            }
        }
    }
    
    return 0;
}