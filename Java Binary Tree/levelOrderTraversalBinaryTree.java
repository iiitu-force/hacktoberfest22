import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;

public class levelOrderTraversalBinaryTree {

    public static void levelOrderTraversals(BinaryTree.Node node){

        Queue<BinaryTree.Node> mq = new ArrayDeque<>();
        mq.add(node);

        while(mq.size()>0){

            int count = mq.size();
            for(int i=0; i<count; i++){

                node = mq.remove();
                System.out.print(node.data+" ");

                if(node.left!=null){
                    mq.add(node.left);
                }
                if(node.right!=null){
                    mq.add(node.right);
                }
            }
            System.out.println();
        }
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
        levelOrderTraversals(root);

    }
}
