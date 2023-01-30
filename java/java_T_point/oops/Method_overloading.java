package oops;

class Adder {
    static int Add(int a,int b){
        return a+b;
    }
    static int Add(int a,int b,int c){
        return a+b+c;
    }
}
class Method_overloading{
    public static void main(String[]args){
        System.out.println(Adder.Add(2,4));
        System.out.println(Adder.Add(2,3,5));
       }
}
