package string.stringBuffer;

public class StringBufferExample2 {
    public static void main(String args[]){
        StringBuffer sb = new StringBuffer("Hello");
        sb.replace(1,3,"java");
        System.out.println(sb);//Hjavalo
        }
}
