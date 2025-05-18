//jha
//17-02-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> vec(n);
        map <int , int> mpp;
        
        for(int i{0} ; i<n ; i++)
        {
            cin >> vec[i];
            //mpp[vec[i]]++;
        }

        // if( mpp.size() == 1 && vec.size() != 1) cout << 0 << endl;
        // else if(mpp.size() == 1 && vec.size() == 1) cout<< 1 <<" "<< 1 << endl;
        
        int ansl = -1 , r = 0 , l = 0 , len = 0 , fr = -1;
        while (r < n) {

            r=max(r,l);
            mpp[vec[r]]++;
            
            while (mpp[vec[r]] > 1) {
                mpp[vec[l]]--;
                l++;
            }
            
            if (r - l + 1 > len) {
                len = r - l ;
                ansl = l ;
                fr = r - 1;
            }
            r++;
            l++;
        }
        if(ansl == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ansl + 1 << " " << fr + 1 << endl;
        }

         
        
    }
    return 0;           
}