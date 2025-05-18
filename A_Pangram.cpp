//jha
//03-05-2025
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
    int t=1 ; 
    //cin >> t ; 
    while( t -- )
    {
        int n ; 
        string s ; 
        cin >> n >> s ;
        map<char,int> mpp ; 
        f(n)
        {
            char c = tolower(s[i]) ;
            mpp[c] ++ ;
        }

        if( mpp.size() >= 26 ) CY ; 
        else CN ;

    }
    return 0;
}