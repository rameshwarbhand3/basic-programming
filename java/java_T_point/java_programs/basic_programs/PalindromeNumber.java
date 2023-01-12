package java_programs.basic_programs;

 class PalindromeNumber {
    public static void main(String[] args){
        int n=121,rev=0,remainder,temp;
        temp=n;
        while(n>0){
            remainder=n%10;
            rev=rev*10+remainder;
            n=n/10;
        }
        if(temp==rev){
            System.out.println("palindrome number");
        }
        else{
            System.out.println("Not palindrome number");
        }
    }
}
