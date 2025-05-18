//jha
//25-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int  n , m;
    cin >> n >> m;
    vector <int> vecn(n);
    vector <int> ans(m);
    vector <int> pos(n);
    map<int,int> mpp;
    for(int i{0} ; i<n ; i++)
    {
        cin >> vecn[i];
    }
    for(int i{0} ; i<m ; i++)
    {
        cin >> ans[i];
    }
    for(int i{n-1} ; i>=0 ; i--)
    {
        mpp[vecn[i]]++;
        pos[i] = mpp.size();

    }
    for(int i{0} ; i < m ; i++)
    {
        cout << pos[ans[i]-1] << endl;
    }

    return 0;
}