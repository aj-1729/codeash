// jha
// 013-03-2025
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
    
    string s1 ; 
    string s2 ; 
    cin >> s1 >> s2 ; 

    if(s1.size() != s2.size()) cout << "NO" << endl ; 
    else
    {
        int n = s1.size() ;
        bool flag = true ;
        f(n)
        { 
        
            if(s1[i] != s2[n-i-1]) 
            {
                flag = false ;
                break ; 
            }
        }
        if(flag) cout << "YES" << endl ; 
        else cout << "NO" << endl ;
    }
    
    return 0;
}