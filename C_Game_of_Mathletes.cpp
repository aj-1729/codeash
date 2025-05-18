//jha
//17-03-2025
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
    while( t-- )
    {
        int n , k ,count = 0; 
        cin >> n >> k; 
        vector <int> vec(n) ; 
        f(n) cin >> vec[i] ;
        map <int, int> mpp ;
        f(n) 
        {
            if(vec[i] >= k) continue ;
            else mpp[vec[i]] ++ ;
        }
        f(n)
        {
            if((mpp.find(vec[i]) == mpp.end()) ||(mpp.find(k-vec[i]) == mpp.end())) continue ;
            else 
            {
                if((mpp[vec[i]] > 0 && mpp[k-vec[i]] > 0))
                {
                    if(vec[i] == (k/2) && mpp[vec[i]] == 1) continue ;
                    count ++ ;
                    mpp[vec[i]] -- ;
                    mpp[k-vec[i]] -- ;
                }
            }
        }
        cout << count << endl ;
    }
    return 0;
}