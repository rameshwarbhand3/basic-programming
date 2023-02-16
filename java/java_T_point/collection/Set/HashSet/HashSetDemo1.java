package collection.Set.HashSet;
import java.util.*;
public class HashSetDemo1 {
    public static void main(String args[]){
        ArrayList<String>al= new ArrayList<String>();
        al.add("Ram");
        al.add("Sham");
        al.add("Raj");
        HashSet<String>s1 = new HashSet<String>(al);
        s1.add("Gaurav");
        for(String i : s1)
        System.out.println(i);
    }
}
