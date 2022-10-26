import java.io.BufferedReader;
import java.io.InputStreamReader;

public class addNodeToaBST {

    public static BinaryTree.Node add(BinaryTree.Node node, int data) {

        if(node==null){

            return new BinaryTree.Node(data,null,null);

        }

        if(node.data>data){

            node.left = add(node.left, data);

        } else if(node.data<data){

            node.right = add(node.right, data);

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

        root = add(root, data);

        displayBinaryTree.displayBinaryT(root);
    }
}
