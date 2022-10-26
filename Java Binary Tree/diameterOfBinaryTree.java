import java.io.BufferedReader;
import java.io.InputStreamReader;

public class diameterOfBinaryTree {

    public static int diameter1(BinaryTree.Node node) {

        if(node==null){

            return 0;

        }

        int ld = diameter1(node.left);
        int rd = diameter1(node.right);
        int f = maxSizeSumHeightBinaryTree.height(node.left)+maxSizeSumHeightBinaryTree.height(node.right)+2;

        return Math.max(f, Math.max(ld, rd));
    }

    static class DiaPair {

        int ht;
        int dia;

    }

    public static DiaPair diameter2(BinaryTree.Node node){

        if(node==null){

            DiaPair ndp = new DiaPair();
            ndp.ht = -1;
            ndp.dia = 0;
            return ndp;

        }

        DiaPair lp = diameter2(node.left);
        DiaPair rp = diameter2(node.right);

        DiaPair mp = new DiaPair();
        mp.ht = Math.max(lp.ht, rp.ht)+1;

        int fes = lp.ht + rp.ht+2;
        mp.dia = Math.max(fes, Math.max(lp.dia,rp.dia));

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
        int diameter;
        diameter = diameter1(root);
        System.out.println("First trick :");
        System.out.println(diameter);
        DiaPair ans = diameter2(root);
        System.out.println("Second trick :");
        System.out.println(ans.dia);

    }
}
