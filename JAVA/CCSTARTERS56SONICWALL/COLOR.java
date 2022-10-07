package CCSTARTERS56SONICWALL;

import java.io.*;
import java.util.StringTokenizer;

public class COLOR {
    public static void main (String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int z = Integer.parseInt(st.nextToken());
            int maxcolor = 0;
            if (x > 0)
                maxcolor++;
            if (y > 0)
                maxcolor++;
            if (z > 0)
                maxcolor++;

            if(x>2 && y>2 && z>2)
                maxcolor=maxcolor+3;
            else if(x>2 && y>1 && z>1)
                maxcolor=maxcolor+2;
            else if(y>2 && z>1 && x>1)
                maxcolor=maxcolor+2;
            else if(z>2 && x>1 && y>1)
                maxcolor=maxcolor+2;
            else if((x>1 && y>1))
                maxcolor=maxcolor+1;
            else if(y>1 && z>1)
                maxcolor=maxcolor+1;
            else if(z>1 && x>1)
                maxcolor=maxcolor+1;

            System.out.println(maxcolor);
            t--;
        }
    }
}
