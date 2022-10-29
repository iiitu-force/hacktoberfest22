import java.util.Scanner;

public class missingBigram {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            int n = sc.nextInt();
            String[] a = new String[n-2];
            for (int i = 0; i < n-2; i ++)
            {
                a[i] = sc.next();
            }
            int pos = -1;
            String x = "";
            for (int i = 0; i < n - 3; i ++)
            {
                if (a[i].charAt(1) != a[i+1].charAt(0))
                {
                    x = a[i].charAt(1) + " " + a[i+1].charAt(0);
                    pos = i;
                }
            }
            for (int i = 0; i < n-2; i ++)
            {
                System.out.print(a[i].charAt(0));
                if (i == pos)
                {
                    System.out.print(x.charAt(0));
                }
                if (i == n - 3)
                {
                    System.out.print(a[i].charAt(1));
                }
            }
            if (x.length() == 0)
            {
                System.out.print(a[n-3].charAt(1));
            }
            System.out.println();
        }
    }
}
