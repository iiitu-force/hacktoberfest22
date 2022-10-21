class Solution {
  public:
	void shortest_distance(vector<vector<int>> &adj)
	{
	    int n = adj.size();
	    for(int i = 0;  i < n;  i++)
	    {
	        for(int j = 0;  j < n;  j++)
	        {
	            if(adj[i][j] == -1)
	                adj[i][j] = 1e9;
	        }
	    }
	    
	    for(int k = 0;  k < n;  k++)
	    {
	        for(int i = 0;  i < n;  i++)
	        {
	            for(int j = 0;  j < n;  j++)
	            {
	                if(adj[i][k] == 1e9  or  adj[k][j] == 1e9)
	                    continue;
	                else
	                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
	            }
	        }
	    }
	    
	    for(int i = 0;  i < n;  i++)
	    {
	        for(int j = 0;  j < n;  j++)
	        {
	            if(adj[i][j] == 1e9)
	                adj[i][j] = -1;
	        }
	    }
	}
};