//jha
//18-03-2025
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
    int t; 
    cin >> t; 
    while(t--)
    {
        string s ; 
        cin >> s; 
        int count0 = 0 , count1 = 0 , len = 0;
        int n = s.size() ;
        f(n) 
        {
            if(s[i] == '1') count1 ++ ;
            else count0 ++ ;
        }
        if(count0 == count1) cout << 0 << endl ;
        else if(count1 == 0) cout << count0 << endl ;
        else if( count0 == 0) cout << count1 << endl ;
        else
        {
            f(n)
            {
                if(s[i] == '0')
                {
                    if(count1 > 0)
                    {
                        count1--;
                        len++;
                    }
                    else break;
                }
                else 
                {
                    if(count0 > 0)
                    {
                        count0 -- ;
                        len ++ ;
                    }
                    else break ;
                }
            }
            cout << n - len <<endl ;
        }

    }
    return 0;
}