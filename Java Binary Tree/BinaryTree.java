import java.util.Stack;

public class BinaryTree {

    public static class Node{

        int data;
        Node left;
        Node right;

        Node(int data, Node left, Node right){

            this.data = data;
            this.left = left;
            this.right = right;

        }
    }

    public static class Pair{

        Node node;
        int state;

        Pair(Node node, int state){

            this.node = node;
            this.state = state;

        }
    }

    public static Node construct(Integer[] arr) {
        Node root = new Node(arr[0], null, null);
        Pair rtp = new Pair(root, 1);

        Stack<BinaryTree.Pair> st = new Stack<>();
        st.push(rtp);

        int idx = 0;
        while (st.size() > 0) {
            BinaryTree.Pair top = st.peek();
            if (top.state == 1) {
                idx++;
                if (arr[idx] != null) {
                    top.node.left = new BinaryTree.Node(arr[idx], null, null);
                    BinaryTree.Pair lp = new BinaryTree.Pair(top.node.left, 1);
                    st.push(lp);
                } else {
                    top.node.left = null;
                }

                top.state++;
            } else if (top.state == 2) {
                idx++;
                if (arr[idx] != null) {
                    top.node.right = new BinaryTree.Node(arr[idx], null, null);
                    BinaryTree.Pair rp = new BinaryTree.Pair(top.node.right, 1);
                    st.push(rp);
                } else {
                    top.node.right = null;
                }

                top.state++;
            } else {
                st.pop();
            }
        }

        return root;
    }

    public static void main(String[] args) throws Exception{

        Integer[] arr = {50, 25, 12, null, null, 37, 30, null, null, null, 75, 62, null, 70, null, null, 87, null, null};
        Node root = construct(arr);
        displayBinaryTree.displayBinaryT(root);
    }
}
