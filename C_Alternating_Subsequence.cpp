//jha
//22-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t ;
    while ( t -- )
    {
        int n ; 
        cin >> n ;
        vector <int> vec(n) ;
        int count = 1 ;
        bool flag = true , ini=true; // true for +ve;
        for(int i{0} ; i < n ; i++)
        {
            cin >> vec[i] ; 
            if(vec[i]>=0) ini = true;
            else ini = false;
            if(i == 0) ini=true ;
            if(flag == ini)
            {
                count ++ ;
                if(ini==true) flag=false;
                else flag=true;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}