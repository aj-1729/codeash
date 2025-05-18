//jha
//08-02-2025
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
        int n,k, count{0};
        cin>>n>>k;
        if(k<=(n) && k!=0) cout<<1<<endl;
        else
        {
            if(k==0 ) cout<<0<<endl;
            else
            {
                vector<int> vec((2*n)-1);
                vec[0]=n;
                int j{1};
                for(int i{1} ; i<=(2*(n-1)) ; i++)
                {
                    vec[i]=(n-j);
                    i++;
                    vec[i]=(n-j);
                    j++;
                }
                // for(int i{0} ; i<vec.size() ; i++)
                // {
                //     cout<<vec[i]<<" ";

                // }
                // cout<<endl;
                for(int i{0} ; i<vec.size() ; i++)
                {
                    if(k<=0) break;
                    k=k-vec[i];
                    count++;

                }
                cout<< count <<endl;
            }
        }
    }

    return 0;
}