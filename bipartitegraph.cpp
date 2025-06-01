// jha
// 01-06-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <= n ; i++)
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define vi vector<int>
#define vii vector<vector<int>>
#define vs vector<string>
#define mi map<int,int>
#define T(t) int t ; cin >> t ; while( t -- )
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define MXI 1000000007LL
using namespace std;
#define debug(...) 42

bool dfs(int node , int color , vi& vis , vii& adj)
{
    vis[node] = color ; 

    for(int i = 0 ; i < adj[node].size() ; i ++)
    {
        if(vis[adj[node][i]] == -1) 
        {
            if(dfs((adj[node][i]) , !color , vis , adj)) return true ; 
        }
        else if(vis[adj[node][i]] == color) return false ; 
    }
    return true ; 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // given a adj vector to check if the graph is bipartite or not ??
    vii adj ; 
    // given

    int V = adj.size() ; 

    bool check = false ; 

    vi vis(V , -1) ; 

    for(int i = 0 ; i < V ; i ++)
    {
        if(vis[i] == -1) if(dfs(i , 0 , vis , adj)) check = true ; 
    }

    cout << check << endl ; 
    

    
    return 0;
}