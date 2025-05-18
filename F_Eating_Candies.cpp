//jha
//26-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> vec(n);
        for(int i{0} ; i < n ; i++)
        {
            cin >> vec[i];
        }
        bool flag = false;
        int l = 0 , r = n-1 ;
        int suml = vec[0] , sumr = vec[n-1];
        int ans = 0;
        while(l<r)
        {
            if(suml == sumr) 
            {
                ans = max(ans,(l+1+(n-r)));
                l++;
                r--;
                suml+=vec[l];
                sumr+=vec[r];
            }
            else if(suml > sumr)
            {
                r--;
                sumr+=vec[r];
            }
            else
            {
                l++;
                suml+=vec[l];
            }
        }
        cout << ans << endl;
    }
    return 0;
}