//jha
///12-02-2025
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
        vector<int> digi;
        if(n%9==0) cout<<"YES"<<endl;
        else
        {
            while(n>0)
            {
                int digit=n%10;
                digi.pb(digit);
                n=n/10;
            }
        }
        int tis=accumulate(all(digi),0);
        map<int,int> mpp;
        for(int i{0} ; i<digi.size() ; i++)
        {
            mpp[digi[i]]++;
        }
        int n6=mpp[6];
        int n2=mpp[2];
        int p,diff;
        int maxi=(n6*4)+(n2*2)+tis;
        if(mpp.find(2)==mpp.end() && mpp.find(3)==mpp.end()) cout<<"NO"<<endl;
        else
        {
            p=((tis/9)*9)+9;

            bool flag=true;
            while(p<=maxi)
            {
                diff=p-tis;
                if(mpp.find(2)!=mpp.end() && mpp.find(3)!=mpp.end())
                {
                    if(diff%6==0 && diff/6<=n6)
                    {
                        flag=true;
                        break;
                    }
                    else if( diff%2==0 && diff/2<=n2)
                    {
                        flag=true;
                        break;
                    }
                    else
                }
                else if(mpp.find(2)==mpp.end())
                {
                    if(diff%6==0)
                    {
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                else
                {
                    if(diff%2==0)
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                p+=9;
            }
            if(flag==false) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}