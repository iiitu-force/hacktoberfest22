import java.util.Arrays;
import java.util.Scanner;

public class forbiddenSubsequence {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            String s = sc.next();
            String t = sc.next();

            char[] a = s.toCharArray();
            Arrays.sort(a);

            int countA=0,countB=0,countC=0;

            if(t.equals("abc")){

                for (char c : a) {

                    if (c == 'a') {

                        countA++;

                    } else if (c == 'b') {

                        countB++;

                    } else if (c == 'c') {

                        countC++;

                    }
                }
                int count = countA + countB + countC;
                if(countA>0) {
                    while (countA-- > 0) {
                        System.out.print('a');
                    }
                    while (countC-- > 0) {
                        System.out.print('c');
                    }
                    while (countB-- > 0) {
                        System.out.print('b');
                    }

                    if (count < a.length) {
                        for (int i = count; i < a.length; i++) {

                            System.out.print(a[i]);

                        }
                    }
                    System.out.println();
                } else {

                    System.out.println(a);

                }
            } else {

                System.out.println(a);

            }

        }
    }
}