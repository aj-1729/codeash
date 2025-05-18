// jha
// 02-04-2025
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
    cin >> t ;
    while( t -- )
    {
        int n , m ; 
        cin >> n >> m ; 

        vector < vector <char> > vec (n,vector <char> (m)) ; 


        for(int i = 0 ; i < n ; i ++)
        {
            string s ; 
            cin >> s ;
            for(int j = 0 ; j < m ; j ++)
            {
                vec[i][j] = s[j] ;
            }
        }
        // if( n == 1 && m == 1) 
        // {
        //     cout << "YES" << endl ;
        //     continue ;
        // }
        // if( n == 1 && m != 1)
        // {
        //     bool x = true ; 
        //     for(int i = 1 ; i < m ; i ++)
        //     {
        //         if(vec[0][i] == '1' && vec[0][i-1] != '1' )
        //         {
        //             x = false ; 
        //             break ;
        //         }
        //     }
        //     if(x)
        //     {
        //         cout << "YES" << endl ; 
        //         continue ; 
        //     }
        //     else
        //     {
        //         cout << "NO" << endl ; 
        //         continue ;
        //     }
        // }
        // if( m == 1 && n != 1)
        // {
        //     bool x = true ; 
        //     for(int i = 1 ; i < n ; i ++)
        //     {
        //         if(vec[i][0] == '1' && vec[i-1][0] != '1' )
        //         {
        //             x = false ; 
        //             break ;
        //         }
        //     }
        //     if(x)
        //     {
        //         cout << "YES" << endl ; 
        //         continue ; 
        //     }
        //     else
        //     {
        //         cout << "NO" << endl ;
        //         continue ; 
        //     }
        // }
        bool flag = true ;
        for(int i = 1 ; i < n ; i ++)
        {
           
            for(int j = 1 ; j < m ; j ++)
            {
                if(vec[i][j] == '1')
                {
                    int a = 0 , b = 0 ; 
                    for(int k = 0 ; k < i ; k ++)
                    {
                        if(vec[k][j] == '1') a ++ ;
                    }
                    for(int k = 0 ; k < j ; k ++)
                    {
                        if(vec[i][k] == '1') b ++ ;
                    }
                    if( a != i && b != j )
                    {
                        flag = false ;
                        break ;
                    }
                    
                }
                
            }
            if(!flag) break ;
            
        }

        if(flag) cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }
    
    return 0;
}