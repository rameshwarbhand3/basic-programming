package collection.Vector.Stack;

import java.util.*;
//Stack is subclass of vector class.
public class StackDemo {
    public static void main(String args[]) {
        Stack<String> st = new Stack<String>();
        st.push("Ashish");
        st.push("Garima");
        st.push("Vishal");
        st.push("Sparsh");
       
        System.out.println(st.peek());
        st.pop();
        System.out.println(st);
        Iterator<String> itr = st.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }
}
