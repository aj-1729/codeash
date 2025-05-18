//jha
//25-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s; 
    vector <char> vec;
    for(int i{0} ; i < s.size() ; i++)
    {
        if(s[i]=='o' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='y' || s[i]=='O' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='U' || s[i]=='Y' )
        {
            continue;
        }
        else
        {
            vec.pb('.');
            if(isupper(s[i])) vec.pb(tolower(s[i]));
            else vec.pb(s[i]);
        }
    }
    for(int i{0} ; i < vec.size() ; i++)
    {
        cout << vec[i]; 
    }

    return 0;
}