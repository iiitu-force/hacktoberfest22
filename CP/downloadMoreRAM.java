import java.util.Scanner;

public class downloadMoreRAM {

    public static void main (String[] args) throws java.lang.Exception {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();
        while (noOfTests-- > 0) {
            int n = sc.nextInt(), k = sc.nextInt();
            int[][] arr = new int[n][2];
            for (int i = 0; i < n; i++) {
                arr[i][0] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                arr[i][1] = sc.nextInt();
            }
            java.util.Arrays.sort(arr, (a, b) -> Integer.compare(a[0], b[0]));
            for (int i = 0; i < n; i++) {
                if (arr[i][0] <= k) {
                    k += arr[i][1];
                } else {
                    break;
                }
            }
            System.out.println(k);
        }
    }
}
