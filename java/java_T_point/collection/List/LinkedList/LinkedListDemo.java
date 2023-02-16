package collection.LinkedList;

import java.util.*;

public class LinkedListDemo {
    public static void main(String args[]) {
        LinkedList<String> l = new LinkedList<String>();
        l.add("Ram");
        l.add("sham");
        l.add("Radha");
        l.add("Ravi");
        Iterator<String> itr = l.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }
}
