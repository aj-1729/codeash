//jha
//04-01-2025
//incorrect
#include<bits/stdc++.h>
#define int long long

#define all(a) (a).begin(), (a).end()``
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    vector <int> piles(n);
    
    for(int i{0} ; i<n ; i++)
    {
        cin>>piles[i];
    }

    int t;
    cin>>t;

    vector<int> labels(t);

    for(int i{0}; i<n ; i++)
    {
        cin>>labels[i];
    }

    vector<int> mp(n);

    int sum{0};

    for(int i{0} ; i<n ; i++)
    {
        sum+=piles[i];
        mp[i]=sum;
    }

    int j{0};

    vector<int> dulabels(t);

    dulabels=labels;

    sort(labels.begin(),labels.end());

 
    vector<int> res;

    for(int i{0} ; i<n ; i++)
    {
        if(mp[i]>=labels[j])
        {
            res.push_back(i+1);
            j++;
        }
    }

    map<int,int> mpp1;
    map<int,int> mpp2;

    for(int i{0} ; i<labels.size() ; i++)
    {
        mpp1[i+1]=dulabels[i];
    }

    for(int i{0} ; i<res.size() ; i++)
    {
        mpp2[labels[i]]=res[i];
    }

    for(auto i: mpp1)
    {
        int x=mpp2[i.second];
        mpp1[i.first]=x;
    }

    for(auto i :mpp1)
    {
        cout<<i.second<<endl;
    }
    

    
    return 0;
}