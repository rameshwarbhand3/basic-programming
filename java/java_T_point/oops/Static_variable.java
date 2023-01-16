package oops;

public class Static_variable {
    static int count=0;
    Static_variable(){
        count++;
        System.out.println(count);
    }
    public static void main(String[]args){
        Static_variable s1=new Static_variable();
        Static_variable s2=new Static_variable();
        Static_variable s3=new Static_variable();
    }
}
