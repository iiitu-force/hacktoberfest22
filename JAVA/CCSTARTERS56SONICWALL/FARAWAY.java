package CCSTARTERS56SONICWALL;

import java.io.*;
import java.util.StringTokenizer;

public class FARAWAY {
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t>0){
            StringTokenizer st1 = new StringTokenizer(br.readLine());
            long n = Long.parseLong(st1.nextToken());
            long m = Long.parseLong(st1.nextToken());
            StringTokenizer st2 = new StringTokenizer(br.readLine());
            long a[] = new long[(int)n];
            long distance = 0L;
            for(int i=0; i<n; i++){
                a[i] = Long.parseLong(st2.nextToken());
                if(a[i]<=(m/2))
                    distance = distance + (m-a[i]);
                else
                    distance = distance + (a[i]-1);
            }
            System.out.println(distance);
            t--;
        }
    }
}
