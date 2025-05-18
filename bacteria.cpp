#include <bits/stdc++.h>
using namespace std;

int main() 
{
   vector<int> vec={0,7,0,2,0,7,0};
   int n=7;
            for(int i{0};i<n;i++){
              
                if(vec[i]!=0){
                    break;
                }
                else{
                    vec.erase(vec.begin()+i);
                }
            }
            int x=vec.size();
            for(int i{vec.size()-1};i>=0;i--){
                if(vec[i]!=0){
                    break;
                }
                else{
                    
                    vec.erase(vec.begin()+i);
                    
                }
            }
            for(auto i:vec){
              cout<<i<<endl;
            }
            
            int ncount{0};
            for(int i{0};i<vec.size();i++){
                if(vec[i]==0){
                    ncount++;
                }
            }
            if(ncount==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
  return 0;          
}