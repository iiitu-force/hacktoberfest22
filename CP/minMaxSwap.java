import java.util.Arrays;
import java.util.Scanner;

public class minMaxSwap {

    public static  void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for(int i=0; i<2*n; i++){

                if(i<n){

                    a[i] = sc.nextInt();

                } else {

                    b[i-n] = sc.nextInt();

                }
            }

            for(int i=0; i<n; i++){

                if(a[i]<b[i]){

                    int temp = a[i];
                    a[i] = b[i];
                    b[i] = temp;

                }
            }
            Arrays.sort(a);
            Arrays.sort(b);

            System.out.println(a[n-1]*b[n-1]);
        }
    }
}
