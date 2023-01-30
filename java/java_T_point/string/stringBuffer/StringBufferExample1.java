package string.stringBuffer;

public class StringBufferExample1 {
    public static void main(String args[]){
    StringBuffer sb = new StringBuffer("Hello");
    sb.insert(1,"java");
    System.out.println(sb);//Hjavaello
}
}
