import java.util.Scanner;

public class closingTheGap {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];
            int sum = 0;

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();
                sum+=a[i];

            }

            if(sum%n==0){

                System.out.println(0);

            } else {

                System.out.println(1);

            }
        }
    }
}
