public class FinallyBlock1 {
    public static void main(String args[]) {
        try {
            System.out.println("Inside the try block");
            int data = 25 / 0;
            System.out.println(data);
        }
        // can not handle exception by catch
        catch (NullPointerException e) {
            System.out.println(e);
        }
        // regardless finally executed.
        finally {
            System.out.println("finally block is always executed");
        }
        System.out.println("Rest of the code");
    }
}