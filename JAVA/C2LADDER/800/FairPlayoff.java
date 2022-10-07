import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class FairPlayoff {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        int f1,f2;
        while(t>0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int[] arr = new int[4];
            for(int i=0; i<4; i++){
                arr[i] = Integer.parseInt(st.nextToken());
            }
            f1 = Math.max(arr[0],arr[1]);
            f2 = Math.max(arr[2],arr[3]);
            Arrays.sort(arr);

            if((arr[2]==f1 || arr[2]==f2) && (arr[3]==f1 || arr[3]==f2))
                System.out.println("YES");
            else
                System.out.println("NO");
            t--;
        }
    }
}
