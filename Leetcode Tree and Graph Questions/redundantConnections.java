class Solution{
    public int[] findRedundantConnection(int[][] edges) {
        int[] ret = null;
        int n = edges.length;
        List<Set<Integer>> adjList = new ArrayList<>(1001);
        for(int i=0; i < 1001; i++)
            adjList.add(new HashSet<>());
        
        for(int[] edge : edges){
            int u = edge[0], v = edge[1];
            if(dfs(u, v, 0, adjList)){
                ret = edge;
            }else{
                adjList.get(u).add(v);
                adjList.get(v).add(u);
            }
        }
        return ret;
    }
    
    private boolean dfs(int u, int v, int pre, List<Set<Integer>> adjList){
        if(u == v)
            return true;
        for(int w : adjList.get(u)){
            if(w == pre) continue;
            boolean ret = dfs(w, v, u, adjList);
            if(ret) return true;
        }
        return false;
    }
}