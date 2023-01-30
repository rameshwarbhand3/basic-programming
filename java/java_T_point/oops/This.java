package oops;

public class This {
    int roll_no;
    String name;
    float fee;
    This(int roll_no,String name,float fee){
        this.roll_no=roll_no;
        this.name=name;
        this.fee=fee;
    }
    void display(){
        System.out.println(roll_no+" "+name+" "+fee);
    }
public static void main(String[]args){
This st1 = new This(101,"Ram",1000);
This st2 = new This(102,"Sham",2000);
st1.display();
st2.display();

}
}
