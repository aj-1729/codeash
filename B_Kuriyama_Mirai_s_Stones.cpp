//jha
//22-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin >> n ;
    vector <int> vec(n) ;
    for(int i{0} ; i < n ; i++ )
    {
        cin >> vec[i] ;
    }
    vector <int> ps1(n);
    int sum=0;
    for(int i{0} ; i < n ; i++ )
    {
        sum+=vec[i];
        ps1[i]=sum;
    }

    sort(all(vec));

    vector <int> ps2(n);
    sum=0;
    for(int i{0} ; i < n ; i++ )
    {
        sum+=vec[i];
        ps2[i]=sum;
    }

    int m ; 
    cin >> m ;
    while(m--)
    {
        int t , l , r ;
        cin >> t >> l >> r ;
        if(t == 1)
        {
            if(l==1) cout << ps1[r-1] << endl ;
            else cout << ps1[r-1] - ps1[l-2] << endl ;
        }
        else
        {
            if(l==1) cout << ps2[r-1] << endl ;
            else cout << ps2[r-1] - ps2[l-2] << endl ;
        }
    }

    return 0;
}