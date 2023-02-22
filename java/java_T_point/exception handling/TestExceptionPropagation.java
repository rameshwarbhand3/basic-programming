public class TestExceptionPropagation {
    void m(){
        int a = 50/0; //Unchecked Exception occur in m method.only unchecked exception follow Exception propagation
    }
    void n(){
        m();
    }
    void p(){
        try{
            n(); // Exception handled in p method i.e propagate from m to p.
        }
        catch(Exception e){
            System.out.println("Exception handled");
        }
    }
    public static void main(String args[]){
        TestExceptionPropagation obj = new TestExceptionPropagation();
        obj.p();
        System.out.println("Normal flow");
        }
}
