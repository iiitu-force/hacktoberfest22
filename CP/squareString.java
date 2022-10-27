import java.util.Scanner;

public class squareString {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-->0){

            String s = sc.next();

            if(s.length()%2==0){

                int count = 0;
                for(int i=0; i<s.length()/2;i++) {

                    count+=(s.charAt(i)-s.charAt((s.length()/2)+i));

                    if(count!=0){
                        break;
                    }

                }

                if (count==0){

                    System.out.println("YES");

                } else {

                    System.out.println("NO");

                }

            } else {

                System.out.println("NO");

            }
        }
    }
}