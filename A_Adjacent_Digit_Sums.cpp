//jha
//12-02-2025
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
        int a, b;
        cin>>a>>b;
        if((b-a)==1) cout<<"Yes"<<endl;
        else if((b==1 && a%9==0)) cout<<"Yes"<<endl;
        else if(a>9)
        {
            bool flag=false;
            while(a>9)
            {
                a=a-9;
                if((a+1)==b)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}