//jha
//24-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin >> n ;
    vector <int> vec (n) ; 
    int sumr=0;
    for(int i{0} ; i < n ; i++)
    {
        cin >> vec[i] ;
        sumr+=vec[i];
    }
    sort(all(vec));

    int summ=0;
    
    //cout << "first" <<sumr<<endl;
    int count= 0;
    for(int i{n-1} ; i>=0 ; i--)
    {
        summ+=vec[i];
        sumr-=vec[i];
        count++;
        //cout<<summ<<" " << sumr<<endl;
        if(summ>sumr) break;
    }
    cout << count <<endl;
    
    return 0;
}