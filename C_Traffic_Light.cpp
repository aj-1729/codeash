// jha
// 10-04-2025
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
    while( t-- )
    {
        int n , indi=-1 , maxi = INT_MIN , diff = 0; 
        char c ; 
        string s ; 
        cin >> n >> c >> s; 
        bool found = false ; 
        if(c =='g')
        {
            cout << 0 << endl ;
            continue ; 
        }

        for(int i = n-1 ; i >= 0 ; i --)
        {
            if(s[i] == 'g')
            {
                indi = i ; 
            }
            if(s[i] == c && indi != -1)
            {
                diff = indi - i ; 
                maxi = max(diff,maxi) ;
            }
        }
        //cout << maxi << endl ;
        int last = -1 ; 
        for(int i = n-1 ; i>=0 ; i--)
        {
            if(s[i] == 'g') 
            {
                last = i ; 
                break ;
            }
        }
        int first = -1 ; 
        for(int i = 0 ; i <n ; i ++)
        {
            if(s[i] == 'g') 
            {
                first =  i ;
                break ; 
            }
        }
        int count = 0 ;
        int x = -1 ;
        for(int i = last ; i <n ; i ++)
        {
            if(s[i] == c)
            {
                count ++ ;
                x = i ; 
                break ; 
            }
        }
        if(count == 0) cout << maxi << endl ; 
        else
        {
            maxi = max(maxi , n-x+first) ;
            cout << maxi << endl ;
        }
       



    }
     
    return 0;
}