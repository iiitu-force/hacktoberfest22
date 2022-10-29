import java.util.Scanner;

public class polycrapAndSumofSubsequences {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0) {

            int[] a = new int[7];

            for (int i=0; i<7; i++){

                a[i] = sc.nextInt();

            }

            System.out.println(a[0]+" "+a[1]+" "+(a[5]-a[1]));

        }
    }
}