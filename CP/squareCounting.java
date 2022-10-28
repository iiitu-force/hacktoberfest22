import java.util.Scanner;

public class squareCounting {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            long n = sc.nextLong();
            long s = sc.nextLong();

            System.out.println(s/(n*n));
        }
    }
}