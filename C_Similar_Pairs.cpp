//jha
//06-01-2025
//incorrect
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
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

        for(int i{0} ; i<n ; i++)
        {
            cin>>vec[i];
        }

        set<int> s;

        sort(all(vec));

        int count{0};

        

        for(int i{0} ; i<n ; i++)
        {
            if(s.find(i)==s.end())
            {
                for(int j{i+1} ; j<n ; j++)
                {
                    if(s.find(j)==s.end())
                    {
                        if(abs(vec[i]-vec[j])==1 || (vec[i]%2==0 && vec[j]%2==0) || (vec[i]%2!=0 && vec[j]%2!=0))
                        {
                            count++;
                            s.insert(j);
                            break;
                        
                        }
                    }
                
                }
            }

        }
        

        if(n/2==count)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    //
    return 0;
}