// jha
// 01-03-2025
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
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int count = 0;
        f(n)
        {
            if (s1[i] == '1') count++;
            if (s2[i] == '1') count++;
            if (s3[i] == '1') count++;
        }
        if (count == 0 || count == 3 * n)
        {
            cout << 0 << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            if (count % 2 != 0) cout << -1 << endl;
            else
            {
                int count1 = 0 , count0 = 0 , ans = INT_MIN , x = 0  ;

                for(int i = 0 ; i <n ; i ++)
                {
                    if (s1[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);
                count1 = 0 ;
                for(int i = 0 ; i <n ; i ++)
                {
                    if (s2[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);
                count1 = 0 ;
                for(int i = 0 ; i <n ; i ++)
                {
                    if (s3[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);

                cout << ans << endl;
            }
        }
        else
        {
            if (count % 2 == 0) cout << -1 << endl ;
            else
            {
                int count1 = 0 , count0 = 0 , ans = INT_MIN , x = 0 ;
                for(int i = 0 ; i <n ; i ++)
                {
                    if (s1[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);
                count1 = 0 ;
                for(int i = 0 ; i <n ; i ++)
                {
                    if (s2[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);
                count1 = 0 ;
                for(int i = 0 ; i <n ; i ++)
                {
                    if (s3[i] == '1') count1++;
                }
                count0 = n - count1;
                x = min(count1, count0);
                ans = max(ans, x);

                cout << ans << endl;
            }
        }
    }
    
    return 0;
}