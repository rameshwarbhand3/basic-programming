package Set.HashSet;
import java.util.*;
public class HashSetDemo {
    public static void main(String args[]){
        HashSet<String>s = new HashSet<String>();
        s.add("Ram");
        s.add("Sham");
        s.add("Sham");
        s.add("Vikas");
        s.add("50");
        for(String itr : s){
            System.out.println(itr);
        }
    }
}
