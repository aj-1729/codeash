//jha
//03-02-2025
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
        vector<int> veca(n);
        vector<int> vecb(n);
        map<int,int> mppa;
        map<int,int> mppb;
        int da{0};
        int db{0};
        for(int i{0} ; i<n ; i++)
        {
            cin>>veca[i];
            mppa[veca[i]]++;
        }
        for(int i{0} ; i<n ; i++)
        {
            cin>>vecb[i];
            mppb[vecb[i]]++;
        }
        if(mppa.size()==mppb.size())
        {
            if(mppa.size()==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }       
        else
        {
            da=mppa.size();
            db=mppb.size();
            if((da+db)>=4) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}