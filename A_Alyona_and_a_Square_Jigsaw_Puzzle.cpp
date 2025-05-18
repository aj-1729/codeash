//jha
//31-01-2025
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
        int n;
        cin>>n;
        vector<int> vec(n);
        vector<int> res(1001);
        map<int,int> mpp;
        int sum=1,x{1};
        for(int i {0} ; i<=1000 ; i++)
        {
            res[i]=sum;
            sum=x*x;
            mpp[res[i]]++;
            x+=2;
        }
        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        }
        int total{0},count{0};
        for(int i{0} ; i<n ; i++)
        {
            total+=vec[i];
            if(mpp.find(total)!=mpp.end())
            {
                count++;
            }
        }
        cout<<count<<endl;


    }
    return 0;
}