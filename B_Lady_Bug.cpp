// jha
// 30-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t; 
    while( t-- )
    {
        int n ;
        cin >> n ; 
        string a , b ; 
        cin >> a >> b ; 
        
        int ae = 0 , be = 0 , ao = 0 , bo = 0 ;
        f(n)
        {
            if( i%2 == 0 )
            {
                if(a[i] == '1') ae++ ;

                if(b[i] == '0') be++ ;

            }
            else
            {
                if(a[i] == '1') ao++ ;

                if(b[i] == '0') bo++ ;

            }
        }
        if((ae <= bo) && (ao <= be)) cout << "YES" << endl ;
        else cout << "NO" << endl ;

       
    }
    
    
    return 0;
}