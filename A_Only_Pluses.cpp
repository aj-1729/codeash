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
        int a,b,c;
        vector<int> vec(3);
        int mini{INT_MAX};
        for(int i{0} ; i<3 ; i++)
        {
            cin>>vec[i];
        }
        int temp;
        for(int i{0} ; i<5 ; i++)
        {
            mini=INT_MAX;
            for(int j{0} ; j<3 ; j++)
            {
                if(vec[j]<=mini)
                {
                    temp=j;
                    mini=vec[j];
                }
            }
            vec[temp]++;

        }
        // for(int i{0} ; i <3 ; i++)
        // {
        //     cout<<vec[i]<<" ";
        // }
        // cout<<endl;
        int ans{1};
        for(int i{0} ; i<3; i++)
        {
            ans=ans*vec[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}