import java.util.Scanner;

public class trianglesOnRectangle {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            long w = sc.nextLong(), h = sc.nextLong();
            int k1x = sc.nextInt();
            int[] a = new int[k1x];
            for(int i =0; i<k1x; i++) {

                a[i] = sc.nextInt();

            }
            long A1 = (a[k1x-1]-a[0])*h;

            int k2x = sc.nextInt();
            int[] b = new int[k2x];
            for(int i =0; i<k2x; i++) {

                b[i] = sc.nextInt();

            }
            long A2 = (b[k2x-1]-b[0])*h;

            int k1y = sc.nextInt();
            int[] c = new int[k1y];
            for(int i =0; i<k1y; i++) {

                c[i] = sc.nextInt();

            }
            long A3 = (c[k1y-1]-c[0])*w;

            int k2y = sc.nextInt();
            int[] d = new int[k2y];
            for(int i =0; i<k2y; i++) {

                d[i] = sc.nextInt();

            }
            long A4 = (d[k2y-1]-d[0])*w;

            long ans = Math.max(A1,Math.max(A2,Math.max(A3,A4)));

            System.out.println(ans);

        }
    }
}