//jha
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
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
        int n,m,count{1};
        cin>>n>>m;
        int sumx{m},sumy{m};
        while(n--)
        {
            int i{0},j{0};
            cin>>i>>j;
            if(count!=1)
            {
                sumx+=i;
                sumy+=j;
            }
            count++;
        }
        
        sumx=sumx*2;
        sumy=sumy*2;
        cout<<(sumx+sumy)<<endl;
    }
    return 0;
}