import java.util.*;
public class Main {
      public static void main(String args[])  {
            Student[] s= new Student[3];
            s[0]=new Student("AMY",80);
            s[1]=new Student("BOB",90);
            s[2]=new Student("CAT",85);
            ArrayList <Student> al1=new ArrayList <Student>();
            al1.add(s[0]);
            al1.add(s[1]);
            al1.add(s[2]);
            double ans=Student.findAverage(al1);
            System.out.println("Average of marks of all students is:"+ans);
            System.out.println("Students below aaverage are: "+Student.belowAverage(al1));
      }
}
