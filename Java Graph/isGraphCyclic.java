import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Queue;

public class isGraphCyclic {

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

        Queue<breadthFirstTraversal.Pair> q = new ArrayDeque<>();
        boolean[] visited = new boolean[vtces];
        q.add(new breadthFirstTraversal.Pair(0, 0+""));

        while(q.size()>0){

            breadthFirstTraversal.Pair p = q.remove();

            if(visited[p.val]) {
                System.out.println(true);
                return;
            }

            visited[p.val] = true;

            for(Edge e : graph[p.val]){
                if(!visited[e.nbr]){
                    q.add(new breadthFirstTraversal.Pair(e.nbr, p.psf+e.nbr));
                }
            }

        }

        System.out.println(false);

    }
}
