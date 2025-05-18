//jha
//09-02-2025
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
    vector <int> vec (n) ;
    for( int i{0} ; i < n ; i++ )
    {
        cin >> vec[i] ;
    }
    int maxi = 0 ;
    pair <int,int> pos;
    int count0 = 0 ,count1=0, total=0;
    for( int i {0} ; i < n ; i++ )
    {
        
        for( int j{i} ; j < n ; j++ )
        {
            count0 = 0 , count1 = 0 , total = 0; 
            for( int z{i} ; z<=j ; z++ )
            {
                if( vec[z] == 0 ) count0++;
            }
            for( int z{0} ; z<i ; z++)
            {
                if( vec[z]==1 ) count1++;
            }
            for( int z{vec.size()-1} ; z>j ; z--)
            {
                if( vec[z]==1 ) count1++;
            }
            total=count0+count1;
            maxi=max(maxi,total);
        }
        
    }
    cout<<maxi<<endl;
    
    return 0;
}