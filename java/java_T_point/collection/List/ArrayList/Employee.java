package List.ArrayList;

class Employee  implements Comparable<Employee>{
    int id;
    String name;
    int salary;

    public Employee(int id, String name,int salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;

    }
    

    public int getid() {
        return id;
    }

    public void setid(int id) {
        this.id = id;
    }

    public String getname() {
        return name;
    }

    public void setname(String name) {
        this.name = name;
    }
    public int getsalary() {
        return salary;
    }

    public void setsalary(int salary) {
        this.salary = salary;
    }
    
    @Override
    public int compareTo(Employee e){  
        if(salary==e.salary)  
        return 0;  
        else if(salary>e.salary)  
        return 1;  
        else  
        return -1;  
        }  
        


    @Override
    public String toString() {
        return id + " " + name;
    }

}
