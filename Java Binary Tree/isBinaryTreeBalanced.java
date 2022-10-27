import java.io.BufferedReader;
import java.io.InputStreamReader;

public class isBinaryTreeBalanced {

    static boolean isBalancedBT = true;
    public static int isBTBalanced(BinaryTree.Node node){

        if(node==null){

            return 0;

        }

        int lh = isBTBalanced(node.left);
        int rh = isBTBalanced(node.right);

        if(Math.abs(lh-rh)>=1){

            isBalancedBT = false;

        }
        return Math.max(lh, rh)+1;

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
        isBTBalanced(root);
        System.out.println(isBalancedBT);
    }
}
