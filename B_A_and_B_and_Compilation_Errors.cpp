//jha
//21-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin >> n ;
    vector <int> vec1 (n) ; 
    vector <int> vec2 (n-1) ;
    vector <int> vec3 (n-2) ;
    map<int,int> mpp1;
    map<int,int> mpp2;
    map<int,int> mpp3;
    set<int> s1;
    set<int> s2;
    set<int> s3;
    
    
    for( int i{0} ; i < n ; i++ )
    {
        cin >> vec1[i] ; 
        mpp1[vec1[i]]++ ;
        s1.insert(vec1[i]) ; 
    }
    for( int i {0} ; i < n - 1 ; i++ )
    {
        cin >> vec2[i] ;
        mpp2[vec2[i]]++ ; 
        s2.insert(vec2[i]) ;
    }
    for( int i{0} ; i < n - 2 ; i++ )
    {
        cin >> vec3[i] ;
        mpp3[vec3[i]]++ ;
        s3.insert(vec3[i]) ;
    }
    vector<int> ans;
    if( mpp1.size() == mpp2.size() )
    {
        for(auto i: mpp1) 
        {
            if(mpp2[i.first]!=mpp1[i.first]) 
            {
                ans.pb(i.first);
                break;
            }
        }
    }
    else
    {
        for(auto i : s1)
        {
            if(s2.find(i)==s2.end()) ans.pb(i);
        }
    }
    if( mpp2.size() == mpp3.size() )
    {
        for(auto i: mpp2) 
        {
            if(mpp3[i.first]!=mpp2[i.first]) 
            {
                ans.pb(i.first);
                break;
            }
        }
    }
    else
    {
        for(auto i : s2)
        {
            if(s3.find(i)==s3.end()) ans.pb(i);
        }
    }
    for(int i {0} ; i < ans.size() ; i++ )
    {
        cout << ans[i] << endl;
    }

    

    return 0;
}