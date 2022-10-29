import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class squaresAndCubes {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int noOfTests = sc.nextInt();

        while(noOfTests-->0){

            long n = sc.nextLong();
            ArrayList<Integer> a = new ArrayList<>();

            for (long i=1; (i*i)<=n;i++){
                a.add((int) (i*i));
            }
            for (long i=1; (i*i*i)<=n;i++){
                a.add((int) (i*i*i));
            }

            List<Integer> newList = a.stream()
                    .distinct()
                    .collect(Collectors.toList());
            System.out.println(newList.size());
        }
    }
}
