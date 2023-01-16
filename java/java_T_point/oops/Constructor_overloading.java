package oops;

public class Constructor_overloading {
    int id;
    String name;
    int age;
    Constructor_overloading(int i,String n){
        id=i;
        name=n;
    }
    Constructor_overloading(int i,String n,int a){
        id=i;
        name=n;
        age=a;
    }
    void display(){
        System.out.println(id+" "+name+" "+age);
    }
    public static void main(String[]args){
        Constructor_overloading s1=new Constructor_overloading(100, "Ram");
        Constructor_overloading s2=new Constructor_overloading(101, "Dinesh", 27);
        s1.display();
        s2.display();
    }
 
}
