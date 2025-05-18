//jha
//14-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout<<char(toupper(s[0]));
    for(int i{1} ; i<s.size() ; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}