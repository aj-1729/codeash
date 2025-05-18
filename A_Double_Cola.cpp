//jha
//09-01-2025
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<string> people = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int i{0}, p{1};
    
    while (5 * p < n) 
    {
        n -= 5 * p;
        p *= 2;
    }
    
    cout <<people[(n - 1) / p]<< endl;

    return 0;
}
