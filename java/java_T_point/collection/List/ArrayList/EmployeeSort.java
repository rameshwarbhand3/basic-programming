package List.ArrayList;
import java.util.*;
import java.lang.Object;

public class EmployeeSort {
    public static void main(String args[]) {
        List<Employee> l = new ArrayList<Employee>();
        Employee e1 = new Employee(102, "Ram",2000);
        Employee e2 = new Employee(101, "Sham",3000);
        Employee e3 = new Employee(104, "Vikas",5000);
        Employee e4 = new Employee(103, "Akash",1000);
        Employee e5 = new Employee(103, "Prashant",7000);

        l.add(e1);
        l.add(e2);
        l.add(e3);
        l.add(e4);
        l.add(e5);
        System.out.println("Before sorting : ");
        for (Employee e : l) {
            System.out.println(e);
        }
        
        // l.sort(new Comparator<Employee>() {
        //     public int compare(Employee o1,Employee o2){
        //         int comparison = 0;
        //         comparison = o1.getid()-o2.getid();
        //         if(comparison == 0){
        //             comparison = o1.getname().compareTo(o2.getname());
        //         }
        //         return comparison;
        //     }
        // });
        // System.out.println("After sorting id's: ");
        // for (Employee e : l) {
        //     System.out.println(e);
        // }
        // System.out.println("Sorting based on Salary :");
        // Collections.sort(l);
        // for(Employee e : l){
        //     System.out.println(e.id + " "+e.name+" "+e.salary);
        // }
    }
};

