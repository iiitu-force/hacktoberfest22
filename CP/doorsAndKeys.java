import java.util.Scanner;

public class doorsAndKeys {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            String s = sc.next();
            int doorR = 0, doorG =0, doorB =0, keyr = 0, keyb = 0, keyg = 0;

            for(int i=0; i<s.length(); i++){

                if(s.charAt(i)=='r'){

                    keyr = i;

                } else if(s.charAt(i)=='g'){

                    keyg = i;

                } else if(s.charAt(i)=='b'){

                    keyb = i;

                } else if(s.charAt(i)=='R'){

                    doorR = i;

                } else if(s.charAt(i)=='G'){

                    doorG = i;

                } else {

                    doorB = i;

                }
            }

            if((doorR<keyr)||(doorG<keyg)||(doorB<keyb)){

                System.out.println("NO");

            } else {

                System.out.println("YES");

            }
        }
    }
}
