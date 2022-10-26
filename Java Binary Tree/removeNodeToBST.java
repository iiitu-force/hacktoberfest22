import java.io.BufferedReader;
import java.io.InputStreamReader;

public class removeNodeToBST {

    public static BinaryTree.Node remove(BinaryTree.Node node, int data) {

        if(node==null){

            return null;

        }

        if(node.data<data){

            node.left = remove(node.left, data);

        } else if(node.data>data){

            node.right = remove(node.right, data);

        } else {

            if(node.left!=null&&node.right!=null){
                int max = sizeSumMaxMinBinarySearchTree.max(node.left);
                node.data = max;
                node.left = remove(node.left, max);
                return node;
            }else if(node.left!=null){
                return node.left;
            } else if(node.right!=null){
                return node.right;
            } else {
                return null;
            }

        }
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
        int data = Integer.parseInt(br.readLine());

        BinaryTree.Node root = BinaryTree.construct(arr);

        root = remove(root, data);

        displayBinaryTree.displayBinaryT(root);
    }
}
