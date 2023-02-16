package collection.ArrayList;
import java.util.*;
public class SortArrayList {
    public static void main(String args[]){
        ArrayList<String>al = new ArrayList<String>();
        al.add("Mango");
        al.add("Apple");
        al.add("Banana");
        al.add("Grapes");
        Collections.sort(al);
        for(String fruit:al)
        System.out.println(fruit);
        System.out.println("---------Sorted Numbers----------");
        ArrayList<Integer>al1 = new ArrayList<Integer>();
        al1.add(21);
        al1.add(19);
        al1.add(5);
        al1.add(25);
        Collections.sort(al1);
        for(Integer number : al1 )
        System.out.println(number);
    }
}
