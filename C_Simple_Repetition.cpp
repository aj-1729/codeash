// jha
// 08-04-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42


bool check(int n){
    if(n < 2) return false;
    for(int i = 2 ; i * i <= n ; i ++) if(n % i == 0) return false;
    return true;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t ; 
    cin >> t ; 
    while( t -- )
    {
        int n , k ; 
        cin >> n >> k ;
        if(n == 1  &&  k == 2) 
        {
            cout << "YES" << endl ;
            continue ; 
        }


        if(!check(n)) 
        {
            cout << "NO" << endl ; 
        }
        else
        {
            if(k == 1) cout << "YES" << endl ; 
            else cout << "NO" << endl ; 
        }
    }

    
    return 0;
}