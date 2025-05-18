//jha
//01-02-2025
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
        int count0{0},count1{0};
        bool x=false;
        for(int i{0} ; i<n ; i++)
        {
            if(s[i]=='0') count0++;
            else count1++;
        }
        if(count0==0) cout<<"YES"<<endl;
        else if(count1==0) cout<<"NO"<<endl;
        else if((s[0]=='1')||(s[n-1]=='1')) cout<<"YES"<<endl;
        else
        {
            for(int i{0} ; i<n-1 ; i++)
            {
                if((s[i]==s[i+1])&&(s[i]=='1'))
                {
                    x=true;
                    break;
                }
            }
            if(x==true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
                      
        }
    }
    return 0;
}