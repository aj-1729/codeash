//jha
//27-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m , a;
    cin >> n >> m >> a;
    if(n % a == 0 && m % a == 0)
    {
        cout << (n/a)*(m/a) <<endl;
    }
    else if(n%a != 0 && m%a == 0)
    {
        cout << ((n/a)+1)*(m/a) << endl;
    }
    else if(n%a == 0 && m%a != 0)
    {
        cout << ((n/a))*((m/a)+1) << endl;
    }
    else
    {
        cout << ((n/a)+1)*((m/a)+1) << endl;
    }
    return 0;
}