import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class hasPath {

    static class Edge extends ArrayList<Edge> {
        int src;
        int nbr;
        int wt;

        Edge(int src, int nbr, int wt) {
            this.src = src;
            this.nbr = nbr;
            this.wt = wt;
        }
    }
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int vertices = Integer.parseInt(br.readLine());
        ArrayList<Edge>[] graph = new ArrayList[vertices];
        for(int i = 0; i < vertices; i++){
            graph[i] = new ArrayList<>();
        }

        int edges = Integer.parseInt(br.readLine());
        for(int i = 0; i < edges; i++){
            String[] parts = br.readLine().split(" ");
            int v1 = Integer.parseInt(parts[0]);
            int v2 = Integer.parseInt(parts[1]);
            int wt = Integer.parseInt(parts[2]);
            graph[v1].add(new Edge(v1, v2, wt));
            graph[v2].add(new Edge(v2, v1, wt));
        }

        int src = Integer.parseInt(br.readLine());
        int dest = Integer.parseInt(br.readLine());

        // write your code here
        boolean[] visited = new boolean[vertices];
        boolean path = hasPathFunction(graph, src, dest, visited);
        System.out.println(path);

    }


    public static boolean hasPathFunction(ArrayList<Edge>[] graph,int src, int dest, boolean[] visited){

        if(src == dest)
            return true;
        visited[src] = true;
        for( Edge edge : graph[src]){
            if (!visited[edge.nbr]) {
                boolean hasNbrPath = hasPathFunction(graph, edge.nbr, dest, visited);
                if (hasNbrPath)
                    return true;
            }
        }

        return false;

    }
}
