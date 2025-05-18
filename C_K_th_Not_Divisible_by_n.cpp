//jha
//04-01-2025
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans{0};
        cin>>n>>k;

        if(k>=n)
        {
            int x{0};
            if(k%(n-1)==0)
            {
                x=k/(n-1)-1;
            }
            else
            {
                x=k/(n-1);
            }

            ans=k+x;
        }
        else
        {
            ans=k;
        }
        cout<<ans<<endl;;


    }
    return 0;
}