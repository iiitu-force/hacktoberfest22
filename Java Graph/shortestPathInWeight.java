import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.PriorityQueue;

public class shortestPathInWeight {

    public static class Pair implements Comparable<Pair> {
        int vtc;
        String psf;
        int wsf;

        Pair(int vtc, String psf, int wsf){
            this.vtc = vtc;
            this.psf = psf;
            this.wsf = wsf;
        }

        public int compareTo(Pair o){
            return this.wsf - o.wsf;
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
        boolean[] visited = new boolean[vtces];

        printShortestPath(graph, src, visited);

    }

    public static void printShortestPath (ArrayList<Edge>[] graph, int src, boolean[] visited){

        PriorityQueue<Pair> q = new PriorityQueue<>();

        q.add(new Pair(src,src+"",0));

        while (q.size()>0){

            Pair r = q.remove();

            if(visited[r.vtc])
                continue;

            System.out.println(r.vtc + " via "+r.psf+" @ "+r.wsf);
            visited[r.vtc] = true;

            for(Edge e : graph[r.vtc]){
                if(!visited[e.nbr]){
                    q.add(new Pair(e.nbr, r.psf + e.nbr + "", r.wsf + e.wt));
                }
            }
        }
    }
}
