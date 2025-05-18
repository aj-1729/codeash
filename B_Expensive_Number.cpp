// jha
// 08-04-2025
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
    cin >>t ;
    while(t--)
    {
        string s ; 
        cin >> s ; 
        int ans = 0 , flag = 0 ; 
        for(int i = s.size() - 1 ; i >= 0 ; i --)
        {
            if(s[i] != '0')
            {
                flag = i ; 
                break ; 
            }
            else ans ++ ;
        }
        for(int i = 0 ; i < flag ; i ++)
        {
            if(s[i] != '0') ans ++ ;
        }

        cout << ans << endl ; 
    }
    
    return 0;
}