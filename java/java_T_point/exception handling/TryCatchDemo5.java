public class TryCatchDemo5 {
    public static void main(String args[]){
        try{
            int data1 = 50/0; // exception may occur.
        }
        //catch block is used to handle exception
        catch(Exception e){
            int data2 = 20/0; // exception didn't allow in catch block
            
        }
        //exception not handle catch block hence rest of the code not executed.
        System.out.println("rest of the code");
    }
}
