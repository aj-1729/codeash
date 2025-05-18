//jha
//02-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t ; 
    while(t--)
    {
        int n , m ;
        cin >> n >> m ;
        int indi = 0 , count = 0 , maxi = -1 ;
        vector < vector <char> > vec( n , vector <char> (m)) ;
        for(int i{0} ; i < n ; i++)
        {
            count = 0 ;
            for(int j{0} ; j < m ; j ++ )
            {
                cin >> vec[i][j] ; 
                if(vec[i][j] == '#') ++count ;
            }
            if(count > maxi)
            {
                maxi = count ;
                indi = i ;
            }
        }
        int start = -1 , end = -1 ;
        for(int i{0} ; i < m ; i++)
        {
            if(vec[indi][i] =='#')
            {
                start = i ;
                break ;
            }
        }
        start ++;
        // for(int i{m-1} ; i >= 0 ; i--)
        // {
        //     if(vec[indi][i] =='#')
        //     {
        //         end = i ;
        //         break ;
        //     }
        // }
        // end ++ ;
        end = (maxi - 1) + start ;
        //cout << start << " " << end << " "<< maxi <<" : "<< endl ; 
        cout << indi+1 << " " << (start+end) / 2 << endl ; 
        // for(int i{0} ; i < n ; i++)
        // {
        //     //count = 0 ;
        //     for(int j{0} ; j < m ; j ++ )
        //     {
        //         cout << vec[i][j] ; 
        //         //if(vec[i][j] == '#') count ++ ;
        //     }
        //     cout << endl;
        // }
        // cout << "**************"<<endl;
        //cout << indi+1 << " " << ((start+end)/2)+1<< endl;
    }
    return 0;
}