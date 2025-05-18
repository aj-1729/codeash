//jha
//03-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k  ;
    cin >> n  >>  k ; 
    int fh = 0;
    if(n%2 != 0 ) fh = (n+1) /2 ;
    else  fh = n / 2 ;
    int ans = 0 ;
    if(k<=fh)
    {
        ans = 1 + (k-1)*2;
    }
    else
    {
        ans = 2*(k - fh);
        
    }
    cout << ans ;
    return 0;
}