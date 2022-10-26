import java.io.BufferedReader;
import java.io.InputStreamReader;

public class removeLeavesBinaryTree {

    public static BinaryTree.Node removeLeaves(BinaryTree.Node node){

        if(node==null){

            return null;

        }

        if (node.left == null && node.right == null) {

            return null;

        }

        node.left = removeLeaves(node.left);
        node.right = removeLeaves(node.right);

        return node;

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
        root = removeLeaves(root);
        displayBinaryTree.displayBinaryT(root);

    }
}
