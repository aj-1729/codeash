//jha
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
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        int maxi=vec[0];
        int sum{0};
        for(int i{0};i<n;i++)
        {
            cin>>vec[i];
            sum+=vec[i];
            maxi=max(vec[i],maxi);
        }
        cout<<max((sum+(k-1))/k,maxi)<<endl;
 
        
    }
    return 0;
}