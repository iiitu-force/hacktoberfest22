import java.util.Scanner;

public class reverse {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int[] arr = new int[1000000];
            int[] loc = new int[1000000];
            int n = sc.nextInt();
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
                loc[arr[i]]=i;
            }
            for(int i=1;i<=n;i++){
                if(loc[i]==i-1) System.out.print(i+" ");
                else{
                    for(int j=loc[i];j>=i-1;j--){
                        System.out.print(arr[j]+" ");
                    }for(int j=loc[i]+1;j<n;j++)System.out.print(arr[j]+" ");
                    break;
                }
            }

            System.out.println();
        }
    }
}
