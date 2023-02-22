public class NestedTryBlock {
    public static void main(String args[]){
        try{
            try{
                System.out.println("going to divide by 0");    
                int b =39/0;    
            }
            catch(ArithmeticException e){
                System.out.println(e);
            }
            try{
                int a[] = new int[5];
                a[5] = 10;
            }
            catch(ArrayIndexOutOfBoundsException e){
                System.out.println(e);
            }
        }
        catch(Exception e){
            System.out.println("Handled the exception of outer class");
        }
        System.out.println("Normal flow");
    }
}
