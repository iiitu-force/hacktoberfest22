import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;

public class isGraphBipartite {

    public static class Pair {

        int v;
        int level;

        Pair(int v, int level){
            this.v = v;
            this.level = level;
        }

    }
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

    public static boolean isBipartite(ArrayList<Edge>[] graph){
        return false;
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

        int[] visited = new int[vtces];
        Arrays.fill(visited, -1);

        for(int v=0; v<vtces; v++){

            if(visited[v]==-1) {

                boolean isCompBipartite = checkForBipartite(graph, v, visited);
                if (!isCompBipartite){
                    System.out.println(false);
                    return;
                }
            }
        }

        System.out.println(true);

    }

    public static boolean checkForBipartite(ArrayList<Edge>[] graph, int src, int[] visited){
        ArrayDeque<Pair> q = new ArrayDeque<>();
        q.add(new Pair(src, 0));

        while(q.size()>0){
            Pair rem = q.removeFirst();

            if(visited[rem.v] != -1) {
                if (rem.level != visited[rem.v])
                    return false;

            } else {
                visited[rem.v] = rem.level;
            }

            for(Edge e : graph[rem.v]){
                if(visited[e.nbr] == -1){
                    q.add(new Pair(e.nbr, rem.level + 1));
                }
            }
        }
        return true;
    }
}
