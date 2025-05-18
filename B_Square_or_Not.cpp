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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x{0},e{0};
        if((sqrt(n)*sqrt(n))==n)
        {
            x=sqrt(n);
            vector<vector<char>> vec(x,vector<char> (x));
            for(int i{0} ; i<x ; i++)
            {
                for(int j{0} ; j<x ; j++)
                {
                    vec[i][j]=s[e];
                    e++;
                }
            }
            
        
          bool flag{true};
            for(int i{0} ; i<x ; i++)
            {
                for(int j{0} ; j<x ;j++)
                {
                    if((i==0)||(i==(x-1)))
                    {
                        if(vec[i][j]!='1') flag=false;
                    }
                    else
                    {
                        if(j==0 || j==(x-1))
                        {
                            if(vec[i][j]!='1') flag=false;
                        }
                        else
                        {
                            if(vec[i][j]!='0') flag=false;
                        }
                    }
                }
            }
            if(flag==true) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


       
        
    }
    return 0;
}