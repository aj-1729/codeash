//jha
//28-03-2025
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
    int n ; 
    cin >> n ; 
    vector <string> vec(n) ;
    f(n) cin >> vec[i] ;
    map <string , int> mpp ;
    f(n) 
    {
        mpp[vec[i]] ++ ;
    }
    int x = mpp.size() ;
    int count = 1 ; 
    int maxi = INT_MIN ;
    string ans = " ";
    for(auto i : mpp)
    {
        if(i.second > maxi) 
        {
            maxi = i.second ; 
            ans = i.first ;
        }
    }
    cout << ans << endl ;
    return 0;
}