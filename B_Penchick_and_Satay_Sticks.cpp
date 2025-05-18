//jha
//13-02-2025
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
        vector <int> vec(n) ;
        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        } 
        bool flag=true;
        for(int i{0} ; i<n ; i++)
        {
            if(vec[i]!=(i+1))
            {
                if(vec[i]==(i+2) && vec[i+1]==(i+1))
                {
                    vec[i]=(i+1);
                    vec[i+1]=(i+2);
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}