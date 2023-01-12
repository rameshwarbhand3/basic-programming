package java_programs.basic_programs;

public class PrimeNumber {
    static void checkprime(int n){
        int flag=0;
        if(n==0 || n==1){
        System.out.println(n+" is not a prime number");
    }
    else{
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                System.out.println(n+" is not a prime number");
                flag=1;
                break;
            }
        }
    }
}
    public static void main(String[] args){
        checkprime(5);
        checkprime(10);
    }
}
