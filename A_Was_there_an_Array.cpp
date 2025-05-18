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
    int t;
    cin >> t ;
    while( t -- )
    {
        int n ; 
        cin >> n ;
        vector < int > vec ( n ) ;
        
        for( int i{0} ; i < n - 2 ; i++ )
        {
            cin >> vec[i] ; 
        }
        bool flag {true} ;
        if( n < 5 ) 
        {
            flag = true ;
        }
        else
        {
            for (int i{0} ; i < n - 4 ; i++ )
            {
                if( ( vec[i] == 1 && vec[i+1] == 0 && vec[i+2] == 1))
                {  
                    flag = false;
                }
            }
        }

        
        
        if( flag == false ) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}