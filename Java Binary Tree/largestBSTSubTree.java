import java.io.BufferedReader;
import java.io.InputStreamReader;

public class largestBSTSubTree {

    public static class isBSTPair{

        boolean isBST;
        int max;
        int min;
        BinaryTree.Node root;
        int size;

    }

    public static isBSTPair checkBSTPair(BinaryTree.Node node){

        if(node==null){

            isBSTPair bp = new isBSTPair();
            bp.isBST = true;
            bp.max = Integer.MIN_VALUE;
            bp.min = Integer.MAX_VALUE;
            bp.root = null;
            bp.size = 0;
            return bp;

        }

        isBSTPair lp = checkBSTPair(node.left);
        isBSTPair rp = checkBSTPair(node.right);

        isBSTPair mp = new isBSTPair();

        mp.isBST = (lp.isBST)&&(rp.isBST)&&(node.data>=lp.max&&node.data<=rp.min);
        mp.max = Math.max(node.data, Math.max(rp.max, lp.max));
        mp.min = Math.min(node.data, Math.min(rp.min, lp.min));

        if(mp.isBST){

            mp.root = node;
            mp.size = lp.size+ rp.size+1;

        } else if(lp.size> rp.size) {

            mp.root = lp.root;
            mp.size = lp.size;

        } else {

            mp.root = rp.root;
            mp.size = rp.size;

        }
        return mp;
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
        isBSTPair ap = checkBSTPair(root);
        System.out.println(ap.root.data+"@"+ap.size);

    }
}
