//jha
//16-02-2025
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
        string s;
        cin>>s;
        map<char,int> mpp;
        for(int i{0} ; i<s.size() ; i++)
        {
            mpp[s[i]]++;
        }
        if(mpp.size()==1) cout<<"NO"<<endl;
        else
        {
            for(int i{0} ; i<s.size()-1 ; i++)
            {
                if(s[i]!=s[i+1]) swap(s[i],s[i+1]);
            }
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}