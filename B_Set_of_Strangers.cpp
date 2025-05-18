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

    int t ; 
    cin >> t ;
    while( t -- )
    {
        int n , m ;
        cin >> n >> m ;

        vector< vector < int > > vec ( n , vector < int > ( m ));

        for( int i{0} ; i < n ; i++ )
        {
            for( int j{0} ; j < m ; j++ )
            {
                cin >> vec[i][j];
            }
        }

        map < int , int > mpp;
        

        for( int i{0} ; i < n -1; i++ ) 
        {
            for( int j{0} ; j < m -1 ; j++ )
            {
                if( i == 0 && j == 0) 
                {
                    if((vec[i][j] == vec[i+1][j]) || (vec[i][j] == vec[i][j+1])) mpp[vec[i][j]] = 2;
                    else mpp[vec[i][j]] = 1 ;
                }
                else if( i ==0 )
                {
                    if((vec[i][j] == vec[i][j-1]) ||( vec[i][j] == vec[i+1][j] )|| (vec[i][j] == vec[i][j+1])) mpp[vec[i][j]]=2;
                    else
                    {
                        if(mpp.find(vec[i][j])==mpp.end()) mpp[vec[i][j]] = 1;
                        else if(mpp[vec[i][j]]==2) mpp[vec[i][j]]=2;
                        else mpp[vec[i][j]]=1;
                    }
                    
                }
                else if( j == 0)
                {
                    if((vec[i][j] == vec[i-1][j]) ||( vec[i][j] == vec[i+1][j] )|| (vec[i][j] == vec[i][j+1])) mpp[vec[i][j]]=2;
                    else
                    {
                        if(mpp.find(vec[i][j])==mpp.end()) mpp[vec[i][j]] = 1;
                        else if(mpp[vec[i][j]]==2) mpp[vec[i][j]]=2;
                        else mpp[vec[i][j]]=1;
                    }
                }
                else
                {
                    if((vec[i][j] == vec[i-1][j]) ||( vec[i][j] == vec[i+1][j] )|| (vec[i][j] == vec[i][j+1]) || (vec[i][j]==vec[i][j-1])) mpp[vec[i][j]]=2;
                    else
                    {
                        if(mpp.find(vec[i][j])==mpp.end()) mpp[vec[i][j]] = 1;
                        else if(mpp[vec[i][j]]==2) mpp[vec[i][j]]=2;
                        else mpp[vec[i][j]]=1;
                    }
                }
            }
        }
        vector<int> res;

        for(auto i:mpp)
        {
            res.pb(i.second);
        }
        cout<<"mc";
        int sum=accumulate(all(res),0);
        int maxi = *max_element(all(res));
        cout<<sum-maxi<<endl;

    }
    return 0;
}