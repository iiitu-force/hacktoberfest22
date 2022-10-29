import java.util.Scanner;

public class div7 {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt();
            int secondLast = n/10;
            int rem = n%7;
            if((n-rem)/10 == secondLast){

                System.out.println(n-rem);

            }else

                System.out.println(n+(7-rem));

        }
    }
}