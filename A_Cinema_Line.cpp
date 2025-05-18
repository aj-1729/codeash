//jha
//06-01-2025
#include<bits/stdc++.h>
#define int long long
#define emplace_back pb
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> ques(n);

    for(int i{0} ; i<n ; i++)
    {
        cin>>ques[i];
    }

    int initial_sum{0};

    bool x{false};

    int count25{0},count50{0},count100{0};

    for(int i{0} ; i<n ; i++)
    {
        if(ques[i]==25)
        {
            initial_sum+=ques[i];
            count25++;
        }
        else if(ques[i]==50)
        {
            if(initial_sum>=25)
            {
                if(count25!=0)
                {
                    initial_sum+=25;
                    count25--;
                    count50++;
                }
                else
                {
                    cout<<"NO";
                    x=true;
                    break;
                }
            }
            else{
                cout<<"NO";
                x=true;
                break;
            }
        }
        else
        {
            if(initial_sum>=75)
            {
                if(count25>=3 || (count25>=1 && count50>=1))
                {
                    initial_sum-=75;
                    initial_sum+=100;
                    if(count50>=1)
                    {
                        count50--;
                        count25--;
                    }
                    else
                    {
                        count25-=3;
                    }
                }
                else
                {
                    cout<<"NO";
                    x=true;
                    break;
                }
                
            }
            else
            {
                cout<<"NO";
                x=true;
                break;
            }
        }
            
               
            
                       
    }
    if(x==false)
    {
        cout<<"YES";
    }
    return 0;
}