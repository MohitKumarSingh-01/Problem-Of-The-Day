class Solution {
public:
       vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        
        vector<pair<int, int>> adj[n];
        
        for(auto i: redEdges){
            adj[i[0]].push_back({i[1], 0});
        }
        for(auto i: blueEdges){
            adj[i[0]].push_back({i[1], 1});
        }
        
        vector<int> dis(n, 1e9);
        vector<vector<bool>> vis(n, vector<bool>(2, false));
        vis[0][0] = true;
        vis[0][1] = true; 
        dis[0] = 0;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        q.push({0, 1});
        int distance = 0;
        
        while(!q.empty()){
            
            int n = q.size();
            
            while(n--){
            
                int node = q.front().first;
                int nodeColor = q.front().second;
                q.pop();
                dis[node] = min(dis[node], distance);

                for(auto i: adj[node]){

                    int child = i.first;
                    int childColor = i.second;
                    if(nodeColor != childColor and vis[child][nodeColor] == false){
                        vis[child][nodeColor] = true;
                        q.push({child, childColor});
                    }
                }
            }
            distance++;
        }
        
        for(int i=0; i<n; i++){
            if(dis[i] == 1e9){
                dis[i] = -1;
            }
        }
        return dis;
        
    }
};
