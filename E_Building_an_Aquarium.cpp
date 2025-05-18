//jha
//06-03-2025
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
    cin >> t ;
    while( t-- )
    {
        int n ; 
        cin >> n ; 
        vector <int> vec(n) ; 
        
        int w ; 
        cin >> w ; 
        for(int i{0} ; i < n ; i++)
        {
            cin >> vec[i] ;
        }
        int l = 1 , h = 2*(1e9) ; 
        int ans = -1 ;
        while(l <= h)
        {
            int mid = l + ((h-l)/2) ; 
            int total = 0 ;
            for(int i{0} ; i < n ; i++)
            {
                if((mid-(vec[i])) > 0) total+=(mid-(vec[i]));
            }
            if(total > w)
            {
                h = mid - 1 ;
            }
            else
            {
                ans = mid;
                l = mid + 1; 
            }
        }
        cout << ans << endl ;
    }
    return 0;
}