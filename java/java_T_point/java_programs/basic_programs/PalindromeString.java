package java_programs.basic_programs;

 class PalindromeString {
    public static void main(String args[]){
        String s="Nitin";
        String reverse="";
        int n=s.length();
        for(int i=n-1;i>=0;i++){
            reverse=reverse+s.charAt(i);
        }
    if(s==reverse){
        System.out.println("String is palindrome");
    }
    else{
        System.out.println("string is not palindrome");
    }
}
 }
