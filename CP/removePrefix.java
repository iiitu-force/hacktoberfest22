import java.util.HashSet;
import java.util.Scanner;

public class removePrefix {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-- > 0) {

            int n = sc.nextInt();
            HashSet<Integer> hs = new HashSet<>();
            int[] a = new int[n];

            for(int i=0; i<n; i++) {
                a[i] = sc.nextInt();
                hs.add(a[i]);
            }

            System.out.println(hs);

        }
    }
}
