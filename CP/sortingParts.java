import java.util.Arrays;
import java.util.Scanner;

public class sortingParts {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();
                b[i] = a[i];

            }

            Arrays.sort(b);
            int count = 0;
            for(int i=0; i<n; i++){

                if(a[i]!=b[i]){
                    count++;
                    break;
                }
            }

            if(count>0){

                System.out.println("YES");

            } else {

                System.out.println("NO");

            }
        }
    }
}
