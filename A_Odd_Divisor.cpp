//jha
//21-03-2025
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
        bool flag = false ;
        int n ; 
        cin >> n ;
        if ((n & (n - 1)) == 0) {
            CN;  
        } else {
            CY;  
        }
    }
    return 0;
}