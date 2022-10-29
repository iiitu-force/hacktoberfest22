import java.util.Scanner;

public class robotCleaner {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            int n = sc.nextInt(),m = sc.nextInt(), rb = sc.nextInt(), cb = sc.nextInt(), rd = sc.nextInt(), cd = sc.nextInt();

            if((rd>=rb)||(cd>=cb)){

                System.out.println(Math.min(Math.max(0,rd-rb),Math.max(0,cd-cb)));

            } else {
                int count=0;
                while ((rb != n) && (cb != m)) {

                    rb++;
                    cb++;
                    count++;

                }

                if(rb==n){

                    while ((rb != rd) || (cb != cd)){

                        count++;
                        rb--;
                        cb++;
                        if(cb==m){
                            break;
                        }
                    }

                } else{

                    while ((rb != rd) || (cb != cd)){

                        count++;
                        rb++;
                        cb--;
                        if(rb==n){
                            break;
                        }
                    }

                }
                while ((rb != rd) || (cb != cd)){

                    count++;
                    rb--;
                    cb--;

                }
                System.out.println(count);
            }
        }
    }
}
