import java.util.Arrays;
import java.util.Scanner;

public class arena {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();

            }
            Arrays.sort(a);

            int count=0;
            for(int i=0; i<n; i++){

                if(a[i]>a[0]){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
