class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> ans;
        unordered_map<int, list<int>> adj;
        unordered_map<int, bool> vis;
        
        //creating adj list from pairs
        for(int i=0; i<edges.size(); i++)    {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
       }
        
         queue<int>q;
        q.push(source);
    vis[source]=true;
            
             while(!q.empty()){
                int f=q.front();
                q.pop();
                if(f==destination) return true;
                for(auto it:adj[f]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=true;
                    }
                }
             }
    
        return false;
}
    
};