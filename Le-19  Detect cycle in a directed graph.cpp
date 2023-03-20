class Solution {
    private:
       bool dfscheck(int node, vector<int> adj[],int vis[],int pathvis[]){
           vis[node]=1;
           pathvis[node]=1;
           
           for(auto it: adj[node]){
            if(!vis[it]){
               if(dfscheck(it,adj,vis,pathvis)==true) return true;
           }
           else if(pathvis[it]){
               return true;
           }
           }
           pathvis[node]=0;
           return false;
       }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       int vis[V]={0};
       int pathvis[V]={0};
       
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(dfscheck(i,adj,vis,pathvis)==true) return true;
           }
       }
       return false;
    }
};
