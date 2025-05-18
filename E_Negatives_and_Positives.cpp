//jha
//23-02-2025
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
    cin >> t;
    while(t--)
    {
        int n ; 
        cin >> n ; 
        vector <int> vec(n) ; 
        bool flag=false;
        int count = 0;
        for(int i{0} ; i< n ;i++)
        {
            cin >> vec[i] ;
            if(vec[i]==0) flag=true;
            if(vec[i]<0) count ++ ;
        }
        int sum = 0;
        for(int i{0} ; i < n ; i++)
        {
            if(vec[i] < 0) vec[i] = -vec[i] ;
            sum+=vec[i];
        }
        sort(all(vec));
        if(flag || count%2==0) cout << sum <<endl;
        else 
        {
            cout<< sum -(2*vec[0]) <<endl;
        }
        
        
    }
    return 0;
}