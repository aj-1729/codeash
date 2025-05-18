//jha
//01-03-2025
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
        int n ; 
        cin >> n ;
        int x = (n*(n+1))/2 ; 
        //cout << x << endl;
        int root = sqrt(x) ;
        //cout << root << endl;
        if(root*root == x)
        {
            cout << -1 <<endl; 
        }
        else
        {
            vector <int> ps(n) ;
            vector <int> vec(n);
            int sum = 0;
            for(int i{0} ; i < n ; i++)
            {
                vec[i]=i+1;
                sum += vec[i] ; 
                ps[i] = sum;
            }
            
            for(int i{0} ; i < n ; i++)
            {
                int rooti = sqrt(ps[i]) ; 

                if(rooti * rooti == ps[i])
                {

                    swap(vec[i],vec[i+1]);
                    ps[i] = ps[i] + 1 ;
                }
            }
            for( int i{0} ; i < n ; i++)
            {
                cout << vec[i] <<" ";
            }
            cout << endl;

        }       
    }
    return 0;
}