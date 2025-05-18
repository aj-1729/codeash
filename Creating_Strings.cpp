// jha
// 26-03-2025
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
    string s ; 
    cin >> s ;
    int n = s.size() ; 
    map < char ,int > mpp ; 
    f(n) mpp[s[i]] ++ ;

    set <string> ans ; 

    int j = n-1 ; 
    
    bool a = true ;
    while(j != 0)
    {
        int i = j - 1 ;
        while( i != 0 )
        {
            swap(s[i] , s[j]) ;
            ans.insert(s) ; 
            swap(s[j] , s[i]) ;
            i -- ;

        }
        j -- ;
    }
    for(auto i : ans)
    {
        cout << i << endl ;
    }
    
    
    return 0;
}