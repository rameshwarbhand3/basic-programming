package java_programs.basic_programs;

 class FactorialNumber {
    public static void main(String args[]){
        int fact=1;
        int num=4;
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        System.out.println("factorial of "+ num +" is "+fact);
    }
}
