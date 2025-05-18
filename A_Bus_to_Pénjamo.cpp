//jha
//06-02-2025
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
        int n,r;
        cin>>n>>r;
        vector<int> vec(n);
        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        }
        bool flag=true;
        for(int i{0} ; i<n ; i++)
        {
            if((vec[i])%2!=0) flag=false;
        }
        int ans=0;
        int seat=2*r;
        int rem=0;
        int extra=0;
        if(flag==true)
        {
            ans=accumulate(all(vec),0);
            cout<<ans<<endl;
        }
        else
        {
            for(int i{0} ; i<n ; i++)
            {
                if((vec[i]%2!=0) && (vec[i]!=1) )
                {
                    ans+=vec[i]-1;
                    seat=seat-(vec[i]-1);
                    rem++;
                }
                else if(vec[i]%2==0)
                {
                    seat=seat-(vec[i]);
                    ans+=vec[i];
                }
                else
                {
                    rem++;
                }
            }
            if(rem<=(seat/2))
            {
                ans+=rem;
            }
            else
            {
                extra=rem-(seat/2);
                ans+=((seat/2)-extra);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}