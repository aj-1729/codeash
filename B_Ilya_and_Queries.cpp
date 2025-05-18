//jha
//05-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; 
    cin >> s ; 
    int x = s.size() ; 
    vector <int> vec (x-1) ; 
    vector <int> ps (x-1) ; 
    for(int i{0} ; i < (x-1) ; i++)
    {
        if(s[i] == s[i+1]) vec[i] = 1 ;
        else vec[i] = 0 ;
    }

    int sum = 0 ;

    for(int i{0} ; i < (x-1) ; i++)
    {
        sum += vec[i] ; 
        ps[i] = sum ; 
    }

    int m ; 
    cin >> m ;
    while( m-- )
    {
        int l , r ;
        cin >> l >> r;
        if((r-l) == 1)
        {
            if(vec[l-1] == 1) cout << 1 << endl ;
            else cout << 0 << endl ;
        }
        else if (r < 2  || l < 2)
        {
            cout << ps[r-2] << endl ;
        }
        else
        {
            cout << ps[r-2] - ps[l-2] << endl ;
        }
    }

    
    
    return 0;
}