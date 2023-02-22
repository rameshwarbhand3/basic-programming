public class TryCatchDemo1 {
    public static void main(String args[]){
        try{
            int a = 50/0; //may throw an exception
        }
        //handle the exception
        catch(ArithmeticException e){
            System.out.println(e);
        }
        System.out.println("rest of the code");
    }
}
