import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class ArithmeticArray {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while(t>0){
            int c=0;
            double sum=0,mean;
            int n = Integer.parseInt(br.readLine());
            int[] a = new int[n];
            StringTokenizer st = new StringTokenizer(br.readLine());
            for(int i : a) {
                a[i] = Integer.parseInt(st.nextToken());
                sum+=a[i];
            }
            mean = sum/n;
            if(sum==n)
                System.out.println(0);
            else if(sum>n){ //we need to add zeros
                c=0;
                do {
                    c++;
                    n++;
                    mean = sum / n;
                }while(mean!=1.0);
                System.out.println(c);
            }
            else if(sum<n){ // we need to add one integer to compensate sum+k=n+1
                System.out.println(1);
            }
            t--;
        }
    }
}
