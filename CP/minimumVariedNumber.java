import java.util.Scanner;

public class minimumVariedNumber {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-- > 0) {

            int s = sc.nextInt();
            int x = 1, ans = 0;

            for(int i=9; i>=0; i--){
                if(s<=i){
                    ans += s*x;
                    break;
                } else {

                    s -= i;
                    ans += i*x;

                }
                x = x*10;
            }

            System.out.println(ans);
        }
    }
}