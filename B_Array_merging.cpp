// jha
// 29-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t ; 
    cin >> t ; 
    while( t-- )
    {
        int n ; 
        cin >> n ; 
        vector <int> vec1(n) ; 
        vector <int> vec2(n) ;
        f(n) cin >> vec1[i] ;
        f(n) cin >> vec2[i] ;

        map <int,int> mpp1 ;
        map <int,int> mpp2 ;

        
        int len = 1 , maxi=1;
        for( int i = 0 ; i < n -1 ; i ++)
        {
            if(vec1[i] == vec1[i+1])
            {
                len ++ ;
            }
            else
            {
                mpp1[vec1[i]] = max(mpp1[vec1[i]] , len) ;
                len =1 ;
            }
        }
        mpp1[vec1[n-1]] = max(mpp1[vec1[n-1]],len) ; 
        len =1 ;

        for( int i = 0 ; i < n -1 ; i ++)
        {
            if(vec2[i] == vec2[i+1])
            {
                len ++ ;
            }
            else
            {
                mpp2[vec2[i]] = max(mpp2[vec2[i]] , len) ;
                len =1 ;
            }
        }
        mpp2[vec2[n-1]] = max(mpp2[vec2[n-1]],len) ; 

        map<int,int> final ;

        for( auto i : mpp1)
        {
            final[i.first] += i.second ; 
        }
        for( auto i : mpp2)
        {
            final[i.first] += i.second ; 
        }

        for(auto i : final)
        {
            maxi = max(i.second , maxi) ;
        }

        cout << maxi << endl ; 
    }
    
    return 0;
}