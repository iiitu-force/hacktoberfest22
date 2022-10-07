import java.util.Scanner;
public class Oddset
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int n = sc.nextInt();
            int e=0,o=0;
            for(int i=0;i<2*n;i++)
            {
                if(sc.nextInt()%2==0)
                    e++;
                else
                    o++;
            }
            if(e==o)
                System.out.println("Yes");
            else
                System.out.println("No");

                t--;
        }
    sc.close();
    }
}