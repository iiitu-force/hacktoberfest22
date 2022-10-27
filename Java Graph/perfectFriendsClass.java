import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Scanner;

public class perfectFriendsClass {

    public static class Edge {

        int v;
        int nbr;

        Edge(int v, int nbr){
            this.v = v;
            this.nbr = nbr;
        }

    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int k = Integer.parseInt(br.readLine());

        ArrayList<Edge>[] graph = new ArrayList[n];

        for(int i=0; i<n; i++)
            graph[i] = new ArrayList<>();

        for(int i=0; i<k; i++) {
            int p1 = sc.nextInt();
            int p2 = sc.nextInt();
            graph[p1].add(new Edge(p1, p2));
            graph[p2].add(new Edge(p2, p1));
        }

        boolean[] visited = new boolean[n];
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        for(int i=0; i<n; i++){
            if(!visited[i]){
                ArrayList<Integer> res = new ArrayList<>();
                friendsInCommon(graph, visited, i, res);
                ans.add(res);
            }
        }
        int pairs = 0;

        for(int i=0; i<ans.size(); i++){
            for(int j=i+1; j<ans.size(); j++){
                int count = ans.get(i).size()*ans.get(j).size();
                pairs += count;
            }
        }

        System.out.println(pairs);
    }

    public static void friendsInCommon(ArrayList<Edge>[] graph, boolean[] visited, int src, ArrayList<Integer> res){

        visited[src] = true;
        res.add(src);
        for(Edge edge : graph[src]){
            if(!visited[edge.nbr]){
                friendsInCommon(graph, visited, edge.nbr, res);
            }
        }
    }
}
