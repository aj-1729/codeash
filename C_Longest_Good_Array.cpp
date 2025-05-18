//jha
//06-02-2025
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
        int a,b,i{1},count{2};
        cin>>a>>b;
        if(a==b)
        {
            cout<<1<<endl;
        }
        else
        {
            while(a<=b)
            {
                if((a+i)>b)
                {
                    count--;
                    break;
                }
                a=a+i;
                i++;
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}