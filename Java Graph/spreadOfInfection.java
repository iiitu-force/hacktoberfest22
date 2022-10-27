import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;

public class spreadOfInfection {

    public static class Pair{
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

        Edge(int src, int nbr) {
            this.src = src;
            this.nbr = nbr;
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
            graph[v1].add(new Edge(v1, v2));
            graph[v2].add(new Edge(v2, v1));
        }

        int src = Integer.parseInt(br.readLine());
        int t = Integer.parseInt(br.readLine());

        boolean[] visited = new boolean[vtces];

        int ans = findNumberOfInfectedPeople(graph, src, t, visited, 0);
        System.out.println(ans);
    }

    public static int findNumberOfInfectedPeople(ArrayList<Edge>[] graph, int src, int t, boolean[] visited, int count){

        ArrayDeque<Pair> q = new ArrayDeque<>();
        q.add(new Pair(src, 0));

        while(q.size()>0){
            Pair r = q.removeFirst();

            if(visited[r.v]) {
                continue;
            }
            visited[r.v] = true;

            if(r.level==t){
                return count;
            }

            count++;

            for(Edge e : graph[r.v]){
                if(!visited[e.nbr])
                    q.add(new Pair(e.nbr, r.level+1));
            }

        }
        return 0;
    }
}
