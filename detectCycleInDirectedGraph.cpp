// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

bool dfs(int i, vector<int> g[], vector<int>& vis, vector<int>& rec_stack) {
    vis[i] = 1;
    rec_stack[i] = 1;
    for ( int j : adj[i] ) {
        if (!vis[j] && dfs(j, g, vis, rec_stack)) 
            return true;
        else if (rec_stack[j])  return true;
    }
    rec_stack[i] = 0;
return false;
}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V, 0);
	    vector<int> rec(V, 0);
	   	unordered_set<int> in;
	   	for ( int i=0; i<V; i++ )
	   	    in.insert(i);
	   	for ( int i=0; i<V; i++ )
	   	    {
	   	        for ( int j : adj[i] )
	   	        {
	   	            if (i==j)
	   	                return true;
	   	            if (in.find(j)!=in.end())
	   	            {
	   	                in.erase(j);
	   	            }
	   	        }
	   	    }
	    if (in.empty())
	        return true;
	    for ( int i : in )
	        {
	           // cout << i << "\n";
	            if (dfs(i, adj, vis, rec))
	                return true;
	        }
    return false;
	}