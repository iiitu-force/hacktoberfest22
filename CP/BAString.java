import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class BAString {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt(), k = sc.nextInt(), x = sc.nextInt();
            StringBuilder s = new StringBuilder(sc.next());
            ArrayList<Integer> pos = new ArrayList<>();

            for (int i=0; i<n; i++){

                if(s.charAt(i)=='*'){

                    pos.add(i);

                }
            }
            
            Collections.reverse(pos);
            ArrayList<StringBuilder> s1 = new ArrayList<>();

            for (Integer po : pos) {

                for (int j = 0; j <= k; j++) {

                    s.deleteCharAt(po);
                    s.insert(po, String.valueOf('b').repeat(j));
                    s1.add(s);

                }
            }

            System.out.println(s1.get(x-1));

        }
    }
}