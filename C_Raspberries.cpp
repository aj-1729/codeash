//jha
//19-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
#define f(n) for(int i = 0 ; i < n ; i ++)
#define f1(n) for(int i = 1 ; i <= n ; i++)
#define CY cout << "YES" << endl
#define CN cout << "NO" << endl
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t ; 
    while(t--)
    {
        int n , k , mini = INT_MAX; 
        cin >> n >> k ; 
        vector <int> vec(n) ; 
        f(n) cin >> vec[i] ;
        int ans = 0 ;
        if(n !=1 )
        {
            if(k == 4) 
            {
                int ans1 = INT_MAX;
                int count = 0 ;
                f(n) if(vec[i] % 2 == 0 ) count ++ ; 
                if(count >= 2) ans = 0 ;
                else if(count == 1) ans = 1;
                else ans = 2 ;
                f(n)
                {
                    int x = 4 - (vec[i] %4) ;
                    ans1 = min(ans1,x) ;
                }
                ans = min (ans1 , ans);
                f(n)
                {
                    if(vec[i]%4 == 0)
                    {
                        ans = 0 ;
                        break ;
                    }
                }
                cout << ans <<endl;
            }
            else
            {
                bool flag = false;
                f(n)
                {
                    if((vec[i] % k) == 0)
                    {
                        flag = true ;
                        break ;
                    }
                }
                if(flag) ans = 0 ;
                else
                {
                    f(n)
                    {
                        int x = k - (vec[i] % k);
                        mini = min (x , mini) ;
                    }
                    ans = mini ;
                }
                cout << ans <<endl;
            }
        }
        
    }

    return 0;
}