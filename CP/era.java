import java.util.Scanner;

public class era {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int[] a = new int[n];

            for (int i=0; i<n; i++){

                a[i] = sc.nextInt();

            }

            int count=0;

            for (int i=0; i<n; i++){

                if (a[i]>(i+1+count)){

                    count = a[i] - (i+1);

                }
            }
            System.out.println(count);
        }
    }
}