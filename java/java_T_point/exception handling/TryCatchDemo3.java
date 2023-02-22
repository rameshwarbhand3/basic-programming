public class TryCatchDemo3 {
    public static void main(String args[]){
        try{
            int a = 50/0;
        }
        catch(Exception e){
            System.out.println("Can't divided by zero");
        }
        System.out.println("rest of the code");
    }
}
