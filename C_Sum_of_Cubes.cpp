#include <bits/stdc++.h>
#define int long long
#define emplace_back pb
#define all(a) (a).begin(), (a).end()
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        bool found = false;
        
        for (int i{1}; i * i * i <= x; i++) {
            int bx = x - (i * i * i);
            
            int b = round(cbrt(bx));

            if(bx<=0)
            {
                continue;
            }
            
            if (b * b * b == bx) {
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
