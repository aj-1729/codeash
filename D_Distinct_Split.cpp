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
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        map<char ,int> mpp1 ; 
        map<char ,int> mpp2 ; 
        for(int i{0} ; i < n ; i++)
        {
            mpp1[s[i]]++ ;
        }
        int maxi=INT_MIN;
        for(int i{0} ; i < n-1 ; i++)
        {
            mpp2[s[i]]++;
            mpp1[s[i]]--;
            if(mpp1[s[i]]==0) mpp1.erase(s[i]);
            
            int first=mpp1.size();
            int second=mpp2.size();
            int sum = first+second ;
            maxi=max(maxi,sum);
        }
        cout << maxi <<endl;
         

    }
    return 0;
}