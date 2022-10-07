package CCSTARTERS56SONICWALL;

import java.io.*;
public class NEARESTEXIT {
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t>0){
            int x = Integer.parseInt(br.readLine());
            if(x<=50)
                System.out.println("LEFT");
            else
                System.out.println("RIGHT");
            t--;
        }
    }
}
