//jha
//28-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;
    while(t--)
    {
        int n ; 
        cin >> n ;
        if((n-1)%3==0) cout << "YES" << endl ; 
        else cout << "NO" << endl;
    }
    return 0;
}