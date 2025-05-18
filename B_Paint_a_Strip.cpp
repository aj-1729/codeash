//jha
//02-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
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
        int n;
        cin>>n;
        int l{1},sum{2},count{0},r{1},ans{2};
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<2<<endl;
        else
        {
            bool a=true;
            while(a)
            {
                if(count%2==0)
                {
                    r=2*sum;
                    sum=r;
                }
                else
                {
                    sum++;
                    r=2*sum;
                    ans++;
                }
                if(r>=n) break;
                count++;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}