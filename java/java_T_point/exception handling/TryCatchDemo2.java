public class TryCatchDemo2 {
    public static void main(String args[]){
        try{
            int a = 50/0; //exception may occur
            System.out.println("rest of the code"); // rest of the code not executed
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
    }
}
