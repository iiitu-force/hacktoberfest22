import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class DoNotBeDistracted {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        int i,j,f1=0,f2=0;
        char ch,x;
        while(t>0){

            int n = Integer.parseInt(br.readLine());
            String st = br.readLine();
            f2=0;
            for(i=0;i<n;i++){
                f1=0;
                ch=st.charAt(i);
                for(j=i;j<n;j++){
                    x=st.charAt(j);
                    if(ch!=x){
                        f1=1;
                    }
                    if(f1==1){
                        if(ch==x){
                            f2=1;
                            System.out.println("NO");
                            break;
                        }
                    }
                }
                if(f2==1){
                    break;
                }
            }
            if(f2==0){
                System.out.println("YES");
            }
            t--;
        }
    }
}
