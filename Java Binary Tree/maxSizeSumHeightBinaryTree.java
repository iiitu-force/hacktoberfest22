import java.io.BufferedReader;
import java.io.InputStreamReader;

public class maxSizeSumHeightBinaryTree {

    public static int size(BinaryTree.Node node) {
        int s=0;
        if(node!=null){
            s++;
            int rs = size(node.right);
            int ls = size(node.left);
            s+=rs+ls;
        }
        return s;
    }

    public static int sum(BinaryTree.Node node) {
        int sum = 0;
        if(node!=null){
            sum+= node.data;
            int rs = sum(node.right);
            int ls = sum(node.left);
            sum+=rs+ls;
        }
        return sum;
    }

    public static int max(BinaryTree.Node node) {
        int max = Integer.MIN_VALUE;
        if(node!=null){
            max = node.data;
            int rMax = max(node.right);
            int lMax = max(node.left);
            max = Math.max(Math.max(lMax,rMax),max);
        }
        return max;
    }

    public static int height(BinaryTree.Node node) {
        int ht = -1;
        if(node != null){
            int rHt = height(node.right);
            int lHt = height(node.left);
            ht = Math.max(lHt,rHt)+1;
        }
        return ht;
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

        int size = size(root);
        int sum = sum(root);
        int max = max(root);
        int ht = height(root);
        System.out.println(size);
        System.out.println(sum);
        System.out.println(max);
        System.out.println(ht);
    }
}
