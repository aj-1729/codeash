//jha
//04-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char n ; 
    cin >> n ;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string si ; 
    cin >> si ; 
    if( n == 'R' )
    {
        for(int i{0} ; i < si.size() ; i++)
        {
            for(int j{0} ; j<s.size() ; j++)
            {
                if(s[j]==si[i])
                {
                    si[i]=s[j-1];
                }
            }
        }
    }
    else
    {
        for(int i{0} ; i < si.size() ; i++)
        {

            for(int j{0} ; j<s.size() ; j++)
            {
                if(s[j]==si[i] && (si[i]!='z' || si[i]!='a'))
                {
                    si[i]=s[j+1];
                }
                else if(s[j]==si[i] && (si[i]=='z' || si[i]=='a'))
                {
                    if(s[i]=='z') si[i]='a';
                    else si[i]='q';
                }
            }
        }
    }
    cout << si << endl; 
    return 0;
}