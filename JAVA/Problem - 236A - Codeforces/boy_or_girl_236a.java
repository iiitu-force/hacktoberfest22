import java.util.*;
import java.util.Scanner;

public class boy_or_girl_236a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();

        int l = 0;

        for (int i=0; i<str.length(); i++) {
            int x=0;
            for (int j=0; j<i; j++) {
                if (str.charAt(i) == str.charAt(j)) {
                    x++;
                }
            }

            if (x == 0) {
                l++;
            }
        }

        if (l%2 == 0) {
            System.out.println("CHAT WITH HER!");
        }
        else {
            System.out.println("IGNORE HIM!");
        }
    }
}
