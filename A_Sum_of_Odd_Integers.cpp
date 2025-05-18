//jha
//19-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t ;
    while ( t -- )
    {
        int n , k ;
        cin >> n >> k ; 

        if( pow(k,2) > n ) cout << "NO" << endl;
        else if ( ( ( n % 2 == 0  ) && ( k % 2 != 0) ) || ( ( n % 2 != 0  ) && ( k % 2 == 0) ) ) cout << "NO"  <<endl;
        else cout << "YES"  << endl;
    }
    return 0;
}