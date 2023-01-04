package basics;

 class forLoop {
    public static void main(String[] args){
        int sum=0;
        for(int i=1;i<=10;i++){
            sum = sum+i;
        }
        System.out.println("The sum of first 10 natural number is " + sum);
    }
}
