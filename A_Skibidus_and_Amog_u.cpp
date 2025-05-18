//jha
//09-02-2025
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
        vector<char> vec;
        if(s.size()>=3)
        {
            for(int i{0} ; i<=(s.size()-3) ; i++)
            {
                vec.pb(s[i]);
            }
            for(int i{0} ; i<vec.size() ; i++)
            {
                cout<<vec[i];
            }
            cout<<"i"<<endl;
        }
        else
        {
            cout<<"i"<<endl;
        }
    }
    return 0;
}