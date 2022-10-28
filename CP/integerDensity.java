import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class integerDensity {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while (noOfTests-- > 0) {

            int n = sc.nextInt();
            int[] a = new int[n];
            Map<Integer, Integer> map = new HashMap<>();

            for(int i=0; i<n; i++){

                a[i] = sc.nextInt();

                if(map.containsKey(a[i])){

                    map.put(a[i],map.get(a[i])+1);

                } else {

                    map.put(a[i],1);

                }
            }

            int count=0;
            for(Map.Entry<Integer,Integer> m: map.entrySet()){

                if(m.getKey()==0){

                    count++;

                } else {

                    if(m.getValue()==1) count++;
                    else {

                        if(map.containsKey(-1*m.getKey())){

                            count++;

                        } else {

                            count+=2;

                        }
                    }
                }
            }

            System.out.println(count);

        }
    }
}
