package oops;

public class StudentMethod {
    int roll_no;
    String name;
    void insertRecord(int r,String n){
        roll_no=r;
        name=n;
    }
void display(){
    System.out.println(roll_no+" "+name);
}
public static void main(String[] args){
    StudentMethod s1=new StudentMethod();
    StudentMethod s2=new StudentMethod();
    s1.insertRecord(101,"Ram");
    s2.insertRecord(102,"Sham");
    s1.display();
    s2.display();
}

}
