//jha
//18-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n{0} , m{0} , k{0} ;
    cin >> n >> m >> k ; 

    vector <int> vec (m + 1);

    for( int i{0} ; i < m+1 ; i++ )
    {
        cin >> vec[i] ; 
    }

    int my = vec[m] ; 
    int ans = 0;

    for( int i{0} ; i < m ; i++ )
    {
        int x = vec[i] ; 
        int temp = my;

        int count = 0 ;

        for( int j{0} ; j<32 ; j++ )
        {
            int a = x & 1 ;
            int b = temp & 1 ; 

            if( a != b ) count ++ ;

            x = x >> 1 ; 
            temp = temp >> 1 ;
        }
        if( count <= k ) ans++;
    }

    

    cout << ans <<endl ;
    return 0;
}