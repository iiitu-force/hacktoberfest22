import java.util.ArrayList;
import java.util.Scanner;

public class findArray {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

//        ArrayList<Integer> a = new ArrayList<>();
//
//        int i, j;
//        boolean flag;
//
//        for (i = 1; i < 10000; i++) {
//
//            if (i == 1)
//                continue;
//
//            flag = true;
//
//            for (j = 2; j <= i / 2; ++j) {
//                if (i % j == 0) {
//                    flag = false;
//                    break;
//                }
//            }
//
//            if (flag)
//                a.add(i);
//        }
//      OR
        while(noOfTests-->0){

            int n = sc.nextInt();

            for (int k = 2; k <n+2; k++){

                System.out.print(k+" ");

            }
            System.out.println();
        }
    }
}
