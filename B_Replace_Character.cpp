//jha
//31-01-2025
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
        string s;
        cin>>s;
        map<int,int> mpp;
        for(int i{0} ; i<n ; i++)
        {
            mpp[s[i]]++;
        }
        char firsti,lasti,count{1};
        int mxi{INT_MIN},mini{INT_MAX};
        for(auto i: mpp)
        {
            mxi=max(mxi,i.second);
            mini=min(mini,i.second);

        }
        //cout<<mxi<<" "<<mini;
        if(mxi!=mini)
        {
            for(auto i: mpp)
            {
                if(i.second==mxi) lasti=i.first;
                if(i.second==mini) firsti=i.first;
            }
            for(int i{0} ; i<n ; i++)
            {
                if(s[i]==firsti)
                {
                    s[i]=lasti;
                    break;
                }
            }
            cout<<s<<endl;
        }
        else
        {
            for(int i{0} ; i<n-1 ; i++)
            {
                if(s[i]!=s[i+1])
                {
                    s[i]=s[i+1];
                    break;
                }

            }
            cout<<s<<endl;
        }
    }
    return 0;
}