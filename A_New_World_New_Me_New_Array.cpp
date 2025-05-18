//jha
//25-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--)
    {
        int n , k , p;
        cin >> n >> k >> p;
        if((n*p) < abs(k)) cout << -1 << endl;
        else if(abs(k) < p)
        {
            if(k!=0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else
        {
            if(abs(k)%p == 0) cout << abs(k)/p << endl;
            else cout << abs(k)/p +1 <<endl;
        }
    }
    return 0;
}