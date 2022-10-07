package CCSTARTERS56SONICWALL;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CHEFLAND_GAMES {
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t>0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int r1 = Integer.parseInt(st.nextToken());
            int r2 = Integer.parseInt(st.nextToken());
            int r3 = Integer.parseInt(st.nextToken());
            int r4 = Integer.parseInt(st.nextToken());
            if(r1==1 || r2==1 || r3==1 || r4==1){
                System.out.println("OUT");
            }
            else if(r1==0 && r2==0 && r3==0 && r4==0){
                System.out.println("IN");
            }
            t--;
        }
    }
}
