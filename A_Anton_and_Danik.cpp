// jha
// 22-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(i,n) for(int i = 0 ; i < n ; i++)
#define f(i1,n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ;
    int countd=0 ; 
    int counta=0 ;
    f(i,n)
    {
      if(s[i] = 'A') counta++ ;
      else countd ++ ;
    }
    if(counta == countd) cout << "Friendship" ;
    else if(counta > countb) cout << "Anton" ; 
    else cout << "Danik" ;

    
    
    return 0;
}