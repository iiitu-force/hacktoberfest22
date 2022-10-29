import java.util.Scanner;

public class playOff {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int ans = (int) Math.pow(2,n) - 1;
            System.out.println(ans);

        }
    }
}