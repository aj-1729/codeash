// jha
// 06-04-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define all(a)(a).begin(), (a).end()
using namespace std;
#define debug(...) 42

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector < int > vec(n);
        map < int, int > mpp;
        int mini = LLONG_MAX;

        f(n)
        {
            cin >> vec[i];
            mpp[vec[i]]++;
            mini = min(mini, vec[i]);
        }

        //int mini = *min_element(all(vec)) ; 
        //cout << mini ; 
        //cout << (__gcd(2,7)) << endl ; 


        if (mpp[mini] >= 2) 
        {
            cout << "Yes" << endl ;  
        }
        else
        {
            int res = 0 ; 
            f(n)
            {
                if(vec[i] != mini)
                {
                    if( vec[i] % mini == 0 )
                    {
                        res = __gcd(res,vec[i]) ; 
                    }
                }
            }

            if(res == mini) cout << "Yes" << endl ; 
            else cout << "No" << endl ; 
            
        }
        
        
    }


    return 0;
}