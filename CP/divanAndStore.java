import java.util.Arrays;
import java.util.Scanner;

public class divanAndStore {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt(),l = sc.nextInt(),r=sc.nextInt(),k= sc.nextInt();
            int[] a = new int[n];

            for(int i=0; i<n; i++) {

                a[i] = sc.nextInt();

            }

            int noOfChocolates = 0;

            Arrays.sort(a);

            for (int i=0; i<n; i++){

                if(a[i]>=l){

                    if(a[i]<=r){

                        k=k-a[i];
                        if(k>=0){

                            noOfChocolates++;

                        } else {

                            break;

                        }
                    }
                }
            }

            System.out.println(noOfChocolates);
        }
    }
}
