//jha
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        //vector<int> res;
        for(int i{0} ; i<n; i++)
        {
            cin>>vec[i];
        }
        int maxi=INT_MIN;
        int max1,max2;
        int indi{0};
        if(n%2!=0)
        {
            for(int i{0} ; i<vec.size() ; i++)
            {
                if(maxi<=vec[i])
                {
                    maxi=vec[i];
                    indi=i;
                }
            }
            if(indi%2==0)
            {
                cout<<maxi+((n+1)/2)<<endl;
            }
            else
            {
                maxi=INT_MIN;
                for(int i{1} ; i<n-1 ; i+=2)
                {
                    if(maxi<=vec[i]) maxi=vec[i];
                }
                max1=maxi+(n-1)/2;
                maxi=INT_MIN;
                for(int i{0} ; i<n ; i+=2)
                {
                    if(maxi<=vec[i]) maxi=vec[i];
                }
                max2=maxi+(n+1)/2;
                cout<<max(max1,max2)<<endl;

            }
        }
        else
        {
            maxi=*max_element(all(vec));
            cout<<maxi+(n/2)<<endl;
        }
    }
    return 0;
}