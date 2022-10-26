import java.io.BufferedReader;
import java.io.InputStreamReader;

public class traversalInBinaryTree {

    public static void traversals(BinaryTree.Node node){

        if(node==null){
            return;
        }
        System.out.println(node.data+" in pre order");
        traversals(node.left);
        System.out.println(node.data+" in in order");
        traversals(node.right);
        System.out.println(node.data+" in post order");

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

        BinaryTree.Node root = BinaryTree.construct(arr);
        traversals(root);
    }
}
