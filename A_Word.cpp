//jha
//05-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; 
    cin >> s; 
    int countu = 0 , countl = 0 ;
    for(int i{0} ; i < s.size() ; i ++)
    {
        if(isupper(s[i])) countu++;
        else countl++;
    }
    //vector<int> ans(s.size());
    if(countu<=countl)
    {
        for(int i{0} ; i < s.size() ; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for(int i{0} ; i < s.size() ; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s  << endl;

    return 0;
}