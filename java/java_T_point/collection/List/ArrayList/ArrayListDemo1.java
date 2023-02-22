package List.ArrayList;
import java.util.*;
class Student{  
    int rollno;  
    String name;  
    int age;  
    Student(int rollno,String name,int age){  
     this.rollno=rollno;  
     this.name=name;  
     this.age=age;  
    }  
  }  
public class ArrayListDemo1 {
public static void main(String args[]){
    Student s1 = new Student(101,"Ram",28);
    Student s2 = new Student(102,"Sham",30);
    Student s3 = new Student(103,"Ravi",27);
    ArrayList<Student> al=new ArrayList<Student>();  
    al.add(s1);//adding Student class object  
    al.add(s2);  
    al.add(s3);  
    //Getting Iterator  
    Iterator itr=al.iterator();  
    //traversing elements of ArrayList object  
    while(itr.hasNext()){  
      Student st=(Student)itr.next();  
      System.out.println(st.rollno+" "+st.name+" "+st.age);  
    }  
   }  
  }  


