import java.util.*;
public class Student{
     private String name;
     private int marks;
     Student(String name,int marks){
                      this.name=name;
                      this.marks=marks;
     }
     public int getMarks() {
                           return marks;
     }
     public String getName() {
                           return name;
     }
     public void setMarks(int marks) {
                           this.marks = marks;
     }
     public void setName(String name) {
                           this.name = name;
     }
     public String toString(){
                      return ("Name:"+getName()+" Marks:"+getMarks());
     }
     static double  findAverage(ArrayList <Student> al){
            double avg=0.0;
       //      for(int i=0;i<al.size();i++){
       //             avg+=al.get(i).marks;
       //      }
            for(Student s:al){
              avg+=s.getMarks();
            }
            return (avg/al.size());
          
     }
     static ArrayList<Student> belowAverage(ArrayList <Student> al){
          ArrayList <Student> newList= new ArrayList<Student>();
         double avg=findAverage(al);
         for(int i=0;i<al.size();i++){
                      if(al.get(i).getMarks()<avg){
                                            newList.add(al.get(i));
                      }
         }
         System.out.println(newList);
         return newList;
     }

}