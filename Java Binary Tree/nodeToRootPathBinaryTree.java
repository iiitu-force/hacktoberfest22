import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class nodeToRootPathBinaryTree {

    static ArrayList<Integer> path;
    public static boolean find(BinaryTree.Node node, int data){

        if(node == null) {

            return false;
        }

        if (node.data == data) {

            path.add(node.data);
            return true;

        }
        if (find(node.left, data)) {

            path.add(node.data);
            return true;

        }

        if (find(node.right, data)) {

            path.add(node.data);
            return true;

        }

        return false;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        Integer[] arr = new Integer[n];
        String[] values = br.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            if (!values[i].equals("n")) {
                arr[i] = Integer.parseInt(values[i]);
            } else {
                arr[i] = null;
            }
        }

        int data = Integer.parseInt(br.readLine());

        BinaryTree.Node root = BinaryTree.construct(arr);
        path = new ArrayList<>();
        boolean found = find(root, data);
        System.out.println(found);
        System.out.println(path);
    }
}
