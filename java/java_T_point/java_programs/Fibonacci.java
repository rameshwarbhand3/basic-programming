package java_programs;
class Fibonacci{
    static int n1=0,n2=1,n3=0;
    static void fibonacci(int n){
        if(n>0){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            System.out.println(""+n3);
            fibonacci(n-1);
        }
    }
    public static void main(String[] args){
        int n=10;
        System.out.println(n1+""+n2);
        fibonacci(n-2);
    }
}