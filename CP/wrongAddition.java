import java.util.ArrayList;
import java.util.Scanner;

public class wrongAddition {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int a = sc.nextInt(), s = sc.nextInt();
            ArrayList<Integer> arrA = new ArrayList<>();
            ArrayList<Integer> arrS = new ArrayList<>();

            while(a>0){

                arrA.add(a%10);
                a/=10;

            }

            while(s>0){

                arrS.add(s%10);
                s/=10;

            }
        }
    }
}
