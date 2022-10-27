import java.util.Scanner;

public class integerMoves {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n1 = sc.nextInt();
            int n2 = sc.nextInt();
            int sq = (n1*n1)+(n2*n2);
            int h = (int) Math.sqrt(sq);

            if(n1==0&&n2==0){

                System.out.println(0);

            } else {

                if(sq==h*h){

                    System.out.println(1);

                } else {

                    System.out.println(2);

                }
            }
        }
    }
}
