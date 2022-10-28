import java.util.Scanner;

public class plusOneOnTheSubset {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];
            int max = 1,min = 1000000000;

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();

                max = Math.max(max,a[i]);
                min = Math.min(min,a[i]);

            }

            System.out.println(max-min);
        }
    }
}
