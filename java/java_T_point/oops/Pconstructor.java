package oops;

public class Pconstructor {
    int id;
    String name;
    Pconstructor(int i,String n){
        id=i;
        name=n;
    }
    void display(){
        System.out.println(id+" "+name);
    }
    public static void main(String[] args){
        Pconstructor p1=new Pconstructor(101,"Ram");
        Pconstructor p2=new Pconstructor(102,"Ravi");
        p1.display();
        p2.display();
    }
}
