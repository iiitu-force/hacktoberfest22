import java.util.Scanner;

public class equalOrNotEqual {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0) {

            String s = sc.next();
            int count = 0;
            for (int i=0; i<s.length(); i++){

                if (s.charAt(i)=='N'){

                    count++;

                }
            }

            if (count==1){

                System.out.println("NO");

            } else {

                System.out.println("YES");

            }
        }
    }
}
