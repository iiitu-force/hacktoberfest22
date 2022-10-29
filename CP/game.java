import java.util.Scanner;

public class game {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-- > 0) {

            int n = sc.nextInt();
            int[] a = new int[n];

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();

            }

            int l = 0, r = n - 1;

            while(r >= 0 && a[r] == 1) {
                r--;
            }

            while(l < n && a[l] == 1) {
                l++;
            }

            if(l>r){

                System.out.println(0);

            } else {

                System.out.println(r-l+2);

            }
        }
    }
}