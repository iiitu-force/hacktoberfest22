import java.util.Scanner;

public class minority {

    public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int noOfTests = sc.nextInt();

        while(noOfTests-->0) {

        StringBuilder s = new StringBuilder(sc.next());
        long count0=0,count1=0;
        for(int i=0; i<s.length(); i++){

            if(s.charAt(i)=='0'){

                count0++;

            } else {

                count1++;

            }
        }

        if(count0==count1){

            count1--;

        }

        System.out.println(Math.min(count0,count1));

        }
    }
}
