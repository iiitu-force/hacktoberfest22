import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class challengeNine {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        for(int no=1; no<=noOfTests; no++){

            int n = sc.nextInt();
            ArrayList<Integer> arr = new ArrayList<>();
            int sum = 0;

            while(n>0){

                int k = n%10;
                sum+=k;
                arr.add(k);
                n/=10;

            }
            Collections.reverse(arr);
            arr.add(0,0);

            int r = sum%9;
            int req = 0;
            if(r!=0){

                req = 9-r;

            }
            int count=0;

            for(int i=1; i<arr.size(); i++){

                if(r==0){

                    arr.add(2,req);
                    break;

                } else if((req<arr.get(i))&&(req>=arr.get(i-1))) {

                    arr.add(i,req);
                    break;

                }

                count++;

            }

            if(count==arr.size()-1){

                arr.add(req);

            }
            arr.remove(0);

            System.out.print("Case #"+no+": ");

            for(int val : arr){

                System.out.print(val);

            }

            System.out.println();
        }
    }
}
