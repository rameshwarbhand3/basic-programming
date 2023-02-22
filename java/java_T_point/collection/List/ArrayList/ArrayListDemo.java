//List is child interface of collection interface and it is implemented by ArrayList,LinkedList,vector and stack.
package List.ArrayList;
import java.util.*;
public class ArrayListDemo {
    public static void main(String args[]){  
        ArrayList<String> list=new ArrayList<String>();//Creating arraylist  
        list.add("Ravi");//Adding object in arraylist  
        list.add("Vijay");  
        list.add("Ravi");  
        list.add("Ajay");  
        list.set(1,"Ram");
        //Traversing list through Iterator  
        // Iterator <String>itr=list.iterator();  
        // while(itr.hasNext()){  
        // System.out.println(itr.next());  
        // }  
        for(String name : list)
        System.out.println(name);
        }  
}
