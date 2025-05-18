//jha
//08-03-2025
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
    while(t--)
    {
        int n , k ; 
        cin >> n >> k ;
        int x = 0 ;
        if( n == k ) 
        {
            cout << "YES" <<endl;
            for(int i{0} ; i<n ; i++)
            {
                cout << 1 <<" ";
            }
            cout << endl ;
        }
        else
        {
            
                x = n - 2*(k-1) ; 
                if( x>0 && x%2 == 0 )
                {
                    cout << "YES" << endl ;
                    for(int i{0} ; i < k-1 ; i++)
                    {
                        cout << 2 << " " ;
                    }
                    cout << x << endl ;
                    continue ;
                }
                
            
            
                x = n - (k-1) ;
                if( x>0 && x%2!=0 )
                {
                    cout << "YES" << endl ;
                    for(int i{0} ; i < k-1 ; i++)
                    {
                        cout << 1 << " " ;
                    }
                    cout << x << endl ;
                    continue ; 
                } 
                cout << "NO" << endl ;
            
        
        }

    }
    return 0;
}