import java.util.Scanner;

public class reverseAndConcatenate {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n = sc.nextInt(), k = sc.nextInt();
            String s = sc.next();
            StringBuilder sb = new StringBuilder(s);
            sb.reverse();
            String sRev = sb.toString();

            if(s.equals(sRev)||k==0){

                System.out.println(1);

            } else {

                System.out.println(2);

            }
        }
    }
}
