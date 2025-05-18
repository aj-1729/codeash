//jha
//18-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n{0} , l{0};
    cin >> n >> l ;
    vector <double> vec(n);

    for( int i{0} ; i < n ; i++ )
    {
        cin >> vec[i];
    }

    sort(all(vec));

    // 0 3 5 7 9 14 15
    
    double ans = 0;

    for( int i{0} ; i< n - 1 ; i++ )
    {
        ans = max( ans , abs(vec[i]-vec[i+1])/2 );
    }

    ans = max( ans , abs(vec[0]-0));
    ans = max( ans , abs(vec[n-1]-l));
    
    cout << fixed << setprecision(10) << ans <<endl;
    return 0;
}