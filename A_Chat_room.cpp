//jha
//07-03-2025
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
    cin >> s ; 
    int count = 0;
    string ans = "xyzwm";
    for(int i{0} ; i < s.size() ; i++)
    {
        if(s[i] == 'h' && count == 0)
        {
            count ++ ;
            ans[0]='h' ; 
        }
        else if(count == 1 && s[i] == 'e')
        {
            count ++ ;
            ans[1]='e';
            //cout << ans <<endl;
        }
        else if(count == 2 && s[i] == 'l')
        {
            count ++ ;
            ans[2]='l';
            //cout << ans << endl ;
        }
        else if(count == 3 && s[i] == 'l')
        {
            count ++ ;
            ans[3]='l';
           // cout <<  ans << endl;
        }
        else if(count == 4 && s[i] == 'o')
        {
            count ++ ;
            ans[4]='o';
           // cout << ans << endl;
        }

    }
    if( ans == "hello") cout << "YES" << endl ;
    else cout << "NO" << endl;
     
    return 0;
}