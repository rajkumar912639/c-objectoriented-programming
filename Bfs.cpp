#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vis[1001];
void bfs(int node){
    queue<int> q;
    q.push(node);
    vis[node]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(int child:adj[curr]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    return 0;
}
