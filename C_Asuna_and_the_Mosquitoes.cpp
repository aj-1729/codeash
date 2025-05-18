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
    cin >> t ; 
    while(t--)
    {
        int n ;
        cin >> n ;
        vector <int> vec(n) ; 
        f(n) cin >> vec[i] ; 
        
        int ce = 0 , co = 0 , maxo = INT_MIN , maxe = INT_MIN ; 

        f(n)
        {
            if(vec[i] % 2 == 0) 
            {
                ce ++ ;
                maxe = max(maxe , vec[i]) ;
            }
            else
            {
                co ++ ;
                maxo = max(maxo , vec[i]) ;
            }
        }

        if(co == 0)
        {
            cout << maxe << endl;
            continue ;
        }
        if(ce == 0)
        {
            cout << maxo << endl;
            continue ;
        }
        int fans = 0;
        f(n)
        {
            if(vec[i] % 2 == 0) fans += vec[i] ; 
            else fans += (vec[i] -1) ;
        }
        cout << fans + 1 << endl ;

    }
    
    
    return 0;
}