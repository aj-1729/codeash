#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    vector<string> vec(n);
    map<int, int> mpp;
    for(int i{0} ; i<n ; i++)
    {
        cin>>vec[i];
        int x=vec[i].size();
        mpp[x]++;
    }
    
    string ans;

    cin>>ans;  
    int l = ans.size();
    int sum {0};
    for(auto i:mpp) {
        if(i.first < l)
        {
            sum+=i.second;
        }
    }
    
    int bc = (sum+(7*(sum/k)+1));
    int wc = (bc+(7*((mpp[l]-1)/k))+mpp[l]-1);
    cout<<bc<<" "<<wc<<endl;
    return 0;
}