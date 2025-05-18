//jha
//09-02-2025
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
        string s;
        cin>>s;
        int count=0;
        for(int i{0} ; i<s.size() -1; i++)
        {
            if(s[i]==s[i+1]) count++;
        }
        if(count==0) cout<<s.size()<<endl;
        else
        {
            vector<char> vec;
            for(int i{0} ; i<s.size() ; i++)
            {
                vec.pb(s[i]);
            }
            bool a=true;
            while(a)
            {
                count=0;
                for(int i{0} ; i<vec.size()-1 ; i++)
                {
                    if(s[i]==s[i+1])
                    {
                        if(i==0) 
                        {
                            vec.erase(vec.begin()+1);
                            s[i]=s[i+1];
                        }
                        else
                        {
                            s[i]=s[i-1];
                            vec.erase(vec.begin()+(i+1));
                        }
                        count++;
                    }
                }
                if(count==0) break;
            }
            cout<<vec.size()<<endl;
        }
    }
    return 0;
}