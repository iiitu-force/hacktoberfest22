import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class printAllPaths {
    static class Edge {
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

        int vtces = Integer.parseInt(br.readLine());
        ArrayList<Edge>[] graph = new ArrayList[vtces];
        for (int i = 0; i < vtces; i++) {
            graph[i] = new ArrayList<>();
        }

        int edges = Integer.parseInt(br.readLine());
        for (int i = 0; i < edges; i++) {
            String[] parts = br.readLine().split(" ");
            int v1 = Integer.parseInt(parts[0]);
            int v2 = Integer.parseInt(parts[1]);
            int wt = Integer.parseInt(parts[2]);
            graph[v1].add(new Edge(v1, v2, wt));
            graph[v2].add(new Edge(v2, v1, wt));
        }

        int src = Integer.parseInt(br.readLine());
        int dest = Integer.parseInt(br.readLine());

        boolean[] visited = new boolean[vtces];
        printPaths(src, dest, graph, visited, src+"");
        // write all your codes here
    }

    public static void printPaths( int src, int dest, ArrayList<Edge>[] graph, boolean[] visited, String pathSoFar){

        if(src==dest) {
            System.out.println(pathSoFar);
            return;
        }
        visited[src] = true;
        for(Edge edge : graph[src]){
            if(!visited[edge.nbr]){
                printPaths(edge.nbr, dest, graph, visited, pathSoFar + edge.nbr);
            }
        }
        visited[src] = false;
    }
}
