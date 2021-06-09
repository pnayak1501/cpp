// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

	void dfs(int node, vector<int> &ans, vector<int> &vis, vector<int> adj[]){
	    ans.push_back(node);
	    vis[node] = 1;
	    
	    for(int i=0; i<adj[node].size();i++){
	        if(vis[adj[node][i]]!=1){
	            dfs(adj[node][i], ans, vis, adj);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	       vector<int> ans;
	       vector<int> vis(V, 0);
	       dfs(0,ans,vis,adj);
	       return ans;
	    
	}
