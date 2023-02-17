//              **** storing a graph ****          //

// Method1 Space complexity high O(N*N)
#include<bits/stdc++.h>
using namespace std;



int main(){
 
 int n,m;
 cin>>n>>m;
 int adj[n+1][m+1];

 for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;
  adj[u][v]=1;
  adj[v][u]=1;
 }
 return 0;
}




// Method2 Space Complexity good  O(2E)  E = no of Edges;

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 vector<int> adj[n+1];
 for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
 }
 return 0;
}



