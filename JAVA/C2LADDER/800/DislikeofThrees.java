import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class DislikeofThrees {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t>0){
            int k = Integer.parseInt(br.readLine());
            int i = 1, j = 1;
            while (i<=k){
                if(j%3==0 || j%10==3){
                    j++;
                }
                else{
                    if(i==k)
                        break;

                    j++;
                    i++;
                }
            }
            System.out.println(j);
            t--;
        }
    }
}
