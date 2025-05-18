//jha
//20-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k , n , w ;
    cin >> k >> n >> w ;
    int sum = k*(((w)*(w+1))/2);
    if( sum >= n ) cout << sum - n << endl ; 
    else cout << 0 << endl;

    return 0;
}