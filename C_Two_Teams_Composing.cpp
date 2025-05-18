//jha
//08-01-2025
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
      int n;
      cin>>n;
      vector<int> vec(n);
      map<int,int> mp;
      
      for(int i{0} ; i<n ; i++)
      {
        cin>>vec[i];
        mp[vec[i]]++;
      }
      
      if(n==1)
      {
        cout<<0<<endl;
      }
      else
      {
        int count_max{0},count{0};
        for(auto i: mp)
        {
          count_max=max(count_max,i.second);
          count++;
        }
        if(count==(count_max-1))
        {
          cout<<count<<endl;
        }
        else
        {
          int x1=min(count-1,count_max);
          int x2=min(count,count_max-1);
          cout<<max(x1,x2)<<endl;
          
        }
      }
    }
    return 0;
}