import java.util.Scanner;

public class minOrSum {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();

            }

            int ans = a[0];

            for(int i=1; i<n; i++){

                ans = ans|a[i];

            }

            System.out.println(ans);
        }
    }
}
