import java.util.Arrays;
import java.util.Scanner;

public class qualityVSQuantity {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n = sc.nextInt();
            long[] a = new long[n];

            for(int i=0; i<n; i++){

                a[i] = sc.nextLong();

            }
            Arrays.sort(a);

            if(a[n-1]>a[0]+a[1]){

                System.out.println("YES");

            } else {

                System.out.println("NO");

            }
        }
    }
}
